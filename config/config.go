package config

import "fmt"

func Init() error {
	err := InitializerSerial()

	if err != nil {
		return fmt.Errorf("erro ao inicializar a porta serial: %v", err)
	}

	return nil
}
