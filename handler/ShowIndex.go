package handler

import "github.com/gin-gonic/gin"

func ShowIndexHandler(c *gin.Context) {
	c.File("static/index.html")
}
