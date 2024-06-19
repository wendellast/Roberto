package config

import (
	"fmt"

	"go.bug.st/serial"
)

var Port serial.Port

func InitializerSerial() error {
	mode := &serial.Mode{
		BaudRate: 115200,
		Parity:   serial.NoParity,
		StopBits: serial.OneStopBit,
	}
	var err error

	Port, err = serial.Open("COM3", mode)

	if err != nil {
		return fmt.Errorf("falha ao inicializar a porta serial: %v", err)
	}

	return nil
}
