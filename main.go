package main

import (
	"fmt"

	"github.com/wendellast/Roberto/config"
	"github.com/wendellast/Roberto/router"
)

func main() {

	err := config.Init()

	if err != nil {
		fmt.Printf("config initializer erro: %v\n", err)
		return
	}

	router.Initializer()
	defer config.Port.Close()
}
