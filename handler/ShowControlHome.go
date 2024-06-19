package handler

import (
	"net/http"

	"github.com/gin-gonic/gin"
	"github.com/wendellast/Roberto/config"
)

func ShowControlHome(c *gin.Context) {
	action := c.Query("action")
	if action == "on" || action == "off" {
		_, err := config.Port.Write([]byte(action + "\n"))
		if err != nil {
			c.JSON(http.StatusInternalServerError, gin.H{"error": "Falha ao escrever na porta serial"})
			return
		}
		c.JSON(http.StatusOK, gin.H{"message": "LED " + action})
	} else {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Ação inválida"})
	}

}
