package handler

import (
	"net/http"

	"github.com/gin-gonic/gin"
	"github.com/wendellast/Roberto/config"
)

func ControlMusicRobo(c *gin.Context) {
	action := c.Query("action")
	if action == "randomMusic" || action == "oneMusic" || action == "twoMusic" || action == "threMusic" || action == "fourMusic" {
		err := config.WriteToPorts(action + "\n")
		if err != nil {
			c.JSON(http.StatusInternalServerError, gin.H{"error": "Falha ao escrever na porta serial"})
			return
		}
		c.JSON(http.StatusOK, gin.H{"message": "LED " + action})
	} else {
		c.JSON(http.StatusBadRequest, gin.H{"error": "Ação inválida"})
	}
}
