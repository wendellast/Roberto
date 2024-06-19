package main

import (
	"fmt"

	"github.com/wendellast/Roberto/config"
	"github.com/wendellast/Roberto/router"
)

func main() {

	err := config.Init()

	if err != nil {
		fmt.Errorf("config initializer erro: %v", err)
		return
	}

	router.Initializer()
	defer config.Port.Close()
}
