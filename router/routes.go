package router

import (
	"github.com/gin-gonic/gin"
	"github.com/wendellast/Roberto/handler"
)

func InitializerRoutes(router *gin.Engine) {

	basePathApi := "/api/v1"

	v1 := router.Group(basePathApi)
	{
		v1.GET("/", handler.ShowIndexHandler)
		v1.GET("/controlLedsEye", handler.ControlLedsEye)
		v1.GET("/controlLedsAuto", handler.ControlLedsRobo)
		v1.GET("/controlMusicRobo", handler.ControlMusicRobo)
	}

}
