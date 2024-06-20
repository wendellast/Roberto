package config

import (
	"fmt"
	"log"

	"go.bug.st/serial"
)

var PortCOM3, PortCOM4 serial.Port

func InitializerSerial() error {
	mode := &serial.Mode{
		BaudRate: 115200,
		Parity:   serial.NoParity,
		StopBits: serial.OneStopBit,
	}

	var err error

	PortCOM3, err = serial.Open("COM3", mode)
	if err != nil {
		return fmt.Errorf("falha ao inicializar a porta serial COM3: %v", err)
	}

	PortCOM4, err = serial.Open("COM4", mode)
	if err != nil {
		return fmt.Errorf("falha ao inicializar a porta serial COM4: %v", err)
	}

	return nil
}

func readFromPort(port serial.Port, name string) {
	buf := make([]byte, 100)
	for {
		n, err := port.Read(buf)
		if err != nil {
			log.Printf("erro ao ler da porta %s: %v", name, err)
			return
		}
		if n > 0 {
			log.Printf("dados recebidos de %s: %s", name, string(buf[:n]))
		}
	}
}

func ReadFromPorts() {
	go readFromPort(PortCOM3, "COM3")
	go readFromPort(PortCOM4, "COM4")
}

func WriteToPorts(data string) error {
	if _, err := PortCOM3.Write([]byte(data)); err != nil {
		return fmt.Errorf("falha ao escrever na porta COM3: %v", err)
	}
	if _, err := PortCOM4.Write([]byte(data)); err != nil {
		return fmt.Errorf("falha ao escrever na porta COM4: %v", err)
	}
	return nil
}
