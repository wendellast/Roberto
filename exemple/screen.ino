#include <LiquidCrystal.h>
#include "DHT.h"
#include <TimeLib.h>

#define DHTPIN 7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

// Definição do rostinho personalizado
byte smiley[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
};

void setup() {
  lcd.begin(16, 2);
  dht.begin();

  // Carrega o rostinho personalizado na memória do LCD
  lcd.createChar(0, smiley);
}

void loop() {
  // Obtém a hora e os minutos atuais
  int hours = hour();
  int minutes = minute();

  int humi = (int)dht.readHumidity(); // Convertendo para inteiro
  int temp = (int)dht.readTemperature(); // Convertendo para inteiro

  // Alterna entre mostrar e apagar o rostinho a cada segundo
  static bool showSmiley = true;
  showSmiley = !showSmiley;
  
  lcd.clear(); // Limpa o display antes de imprimir os novos valores
  lcd.setCursor(0, 0);
  lcd.print("T: ");
  lcd.print(temp);
  lcd.print(" C");

  lcd.setCursor(0, 1);
  lcd.print("H: ");
  lcd.print(humi);
  lcd.print(" %");

  lcd.setCursor(10, 0);
  if (hours < 10) {
    lcd.print("0"); // Adiciona um zero à esquerda, se a hora for menor que 10
  }
  lcd.print(hours);
  lcd.print(":");
  if (minutes < 10) {
    lcd.print("0"); // Adiciona um zero à esquerda, se os minutos forem menores que 10
  }
  lcd.print(minutes);

  // Exibe ou oculta o rostinho
  if (showSmiley) {
    lcd.setCursor(14, 1); // Posição para o rostinho
    lcd.write(byte(0)); // Escreve o rostinho personalizado
  }

  delay(500); // Aguarda 500 milissegundos
}
