package main

import (
	"log"
	"net/http"

	"github.com/gin-gonic/gin"
	"go.bug.st/serial"
)

var port serial.Port

func initSerial() {

	mode := &serial.Mode{
		BaudRate: 115200,
		Parity:   serial.NoParity,
		StopBits: serial.OneStopBit,
	}
	var err error
	port, err = serial.Open("COM3", mode)
	if err != nil {
		log.Fatalf("Falha ao abrir a porta serial: %v", err)
	}
}

func controlLED(c *gin.Context) {
	action := c.Query("action")
	if action == "on" || action == "off" {
		_, err := port.Write([]byte(action + "\n"))
		if err != nil {
			c.JSON(http.StatusInternalServerError, gin.H{"error": "Falha ao escrever na porta serial"})
			return
		}
		c.JSON(http.StatusOK, gin.H{"message": "LED " + action})
	} else {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Ação inválida"})
	}
}

func main() {
	initSerial()
	defer port.Close()

	router := gin.Default()

	router.GET("/control", controlLED)

	router.GET("/", func(c *gin.Context) {
		c.File("./static/index.html")
	})

	log.Println("Servidor está rodando na porta 8080")
	log.Fatal(router.Run(":8080"))
}
