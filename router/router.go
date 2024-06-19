package router

import (
	"log"

	"github.com/gin-gonic/gin"
)

func Initializer() {
	router := gin.Default()
	InitializerRoutes(router)
	router.Run(":8080")
	log.Println("Servidor está rodando na porta 8080")
}
