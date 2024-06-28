#include <LiquidCrystal.h>
#include "DHT.h"
#include <TimeLib.h>

#define DHTPIN 7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);


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

  lcd.createChar(0, smiley);
}

void loop() {
  
  int hours = hour();
  int minutes = minute();

  int humi = (int)dht.readHumidity(); 
  int temp = (int)dht.readTemperature();

  
  static bool showSmiley = true;
  showSmiley = !showSmiley;
  
  lcd.clear();
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
    lcd.print("0"); 
  }
  lcd.print(hours);
  lcd.print(":");
  if (minutes < 10) {
    lcd.print("0"); 
  }
  lcd.print(minutes);

  
  if (showSmiley) {
    lcd.setCursor(14, 1);
    lcd.write(byte(0)); 
  }

  delay(500); 
}
