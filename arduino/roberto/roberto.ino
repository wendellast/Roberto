#include <LiquidCrystal.h>
#include "DHT.h"
#include <TimeLib.h>
#include "music.h"
#include "music_jojo.h"
#include "music_mortal_kobat.h"

#define DHTPIN 7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

unsigned long millisTarefa1 = millis();

int counter = 0;
int tempo = 100;
int frequencia = 0;
int temp = 250;

int xz = 0;
int buzzerPin = 9;
int speakPin = 9;
int botaoPin = 8;

byte smiley[8] = {
    B00000,
    B10001,
    B00000,
    B00000,
    B10001,
    B01110,
    B00000,
};

void setup()
{
  lcd.begin(16, 2);
  dht.begin();
  lcd.createChar(0, smiley);

  pinMode(buzzerPin, OUTPUT);
  pinMode(botaoPin, INPUT);
}

void loop()
{
  if (digitalRead(botaoPin) == HIGH)
  {

    music();
  }

  int hours = hour();
  int minutes = minute();

  int humi = (int)dht.readHumidity();
  int temper = (int)dht.readTemperature();

  static bool showSmiley = true;
  showSmiley = !showSmiley;

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("T: ");
  lcd.print(temper);
  lcd.print(" C");

  lcd.setCursor(0, 1);
  lcd.print("H: ");
  lcd.print(humi);
  lcd.print(" %");

  lcd.setCursor(10, 0);
  if (hours < 10)
  {
    lcd.print("0"); 
  }
  lcd.print(hours);
  lcd.print(":");
  if (minutes < 10)
  {
    lcd.print("0"); 
  }
  lcd.print(minutes);

  
  if (showSmiley)
  {
    lcd.setCursor(14, 1); 
    lcd.write(byte(0));
  }

  delay(500); 
}

void beep(int note, int duration)
{
  
  tone(buzzerPin, note, duration);

  
  noTone(buzzerPin);

  delay(50);

  
  counter++;
}

void beep(int speakerPin, float noteFrequency, long noteDuration)
{
  int x;

  float microsecondsPerWave = 1000000 / noteFrequency;
  float millisecondsPerCycle = 1000 / (microsecondsPerWave * 2);
  float loopTime = noteDuration * millisecondsPerCycle;

  for (x = 0; x < loopTime; x++)
  {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(microsecondsPerWave);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(microsecondsPerWave);
  }
}

void music()
{

  xz = random(1, 5);
  Serial.println(xz);

  if (xz == 1)
  {                                // Musica robot
    beep(buzzerPin, note_A7, 100); // A
    beep(buzzerPin, note_G7, 100); // G
    beep(buzzerPin, note_E7, 100); // E
    beep(buzzerPin, note_C7, 100); // C
    beep(buzzerPin, note_D7, 100); // D
    beep(buzzerPin, note_B7, 100); // B
    beep(buzzerPin, note_F7, 100); // F
    beep(buzzerPin, note_C8, 100); // C
    beep(buzzerPin, note_A7, 100); // A
    beep(buzzerPin, note_G7, 100); // G
    beep(buzzerPin, note_E7, 100); // E
    beep(buzzerPin, note_C7, 100); // C
    beep(buzzerPin, note_D7, 100); // D
    beep(buzzerPin, note_B7, 100); // B
    beep(buzzerPin, note_F7, 100); // F
    beep(buzzerPin, note_C8, 100); // C
  }

  else if (xz == 2)
  { // Sireni
    for (frequencia = 150; frequencia < 1800; frequencia += 1)
    { 

      tone(buzzerPin, frequencia, tempo); 
      delay(1);                           
    }
    for (frequencia = 1800; frequencia > 150; frequencia -= 1)
    { 

      tone(buzzerPin, frequencia, tempo); 
      delay(1);                           
    }
  }

  else if (xz == 3)
  {
    tone(speakPin, f5s);
    delay(Qnote + Enote);
    noTone(speakPin);
    delay(50);

    tone(speakPin, d5);
    delay(Hnote);
    noTone(speakPin);
    delay(50);

    tone(speakPin, d5);
    delay(Snote);
    noTone(speakPin);
    delay(12.5);

    tone(speakPin, e5);
    delay(Snote);
    noTone(speakPin);
    delay(50);

    tone(speakPin, f5);
    delay(Enote + Snote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, e5);
    delay(Enote + Snote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, d5);
    delay(Enote);
    noTone(speakPin);
    delay(50);

    tone(speakPin, c5s);
    delay(Enote + Snote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, d5);
    delay(Enote + Snote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, e5);
    delay(Enote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, f5s);
    delay(Qnote + Enote);
    noTone(speakPin);
    delay(50);

    tone(speakPin, b5);
    delay(Qnote + Enote);
    noTone(speakPin);
    delay(50);

    tone(speakPin, b4);
    delay(Enote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, c5s);
    delay(Enote);
    noTone(speakPin);
    delay(50);

    tone(speakPin, d5);
    delay(Enote + Snote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, e5);
    delay(Enote + Snote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, d5);
    delay(Enote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, c5s);
    delay(Enote + Snote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, a5);
    delay(Enote + Snote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, g5);
    delay(Enote);
    noTone(speakPin);
    delay(50);

    tone(speakPin, f6s);
    delay(Qnote + Enote);
    noTone(speakPin);
    delay(50);

    tone(speakPin, d6);
    delay(Hnote);
    noTone(speakPin);
    delay(50);

    tone(speakPin, d6);
    delay(Snote);
    noTone(speakPin);
    delay(12.5);

    tone(speakPin, e6);
    delay(Snote);
    noTone(speakPin);
    delay(50);

    tone(speakPin, f6);
    delay(Enote + Snote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, e6);
    delay(Enote + Snote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, d6);
    delay(Enote);
    noTone(speakPin);
    delay(50);

    tone(speakPin, c6s);
    delay(Enote + Snote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, d6);
    delay(Enote + Snote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, e6);
    delay(Enote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, f6s);
    delay(Qnote + Enote);
    noTone(speakPin);
    delay(50);

    tone(speakPin, b6);
    delay(Qnote + Enote);
    noTone(speakPin);
    delay(50);

    tone(speakPin, b6);
    delay(Enote);
    noTone(speakPin);
    delay(50);

    tone(speakPin, c7s);
    delay(Enote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, d7);
    delay(Enote + Snote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, g6);
    delay(Enote + Snote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, f6s);
    delay(Enote);
    noTone(speakPin);
    delay(50);

    tone(speakPin, f6);
    delay(Snote + Enote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, d7);
    delay(Enote + Snote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, a6s);
    delay(Enote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, b6);
    delay(Qnote);
    noTone(speakPin);
    delay(25);
  }

  else if (xz == 4)
  { // Music Mortal kobat
    firstSection();
    firstSection();
    secondSection();
    thirdSection();
    thirdSection();
  }
}

void firstSection()
{
  beep(AA3, 200);
  beep(AA3, 200);
  beep(C4, 200);
  beep(AA3, 200);
  beep(D4, 200);
  beep(AA3, 200);
  beep(E4, 200);
  beep(D4, 200);
  beep(C4, 200);
  beep(C4, 200);
  beep(E4, 200);
  beep(C4, 200);
  beep(G4, 200);
  beep(C4, 200);
  beep(E4, 200);
  beep(C4, 200);
  beep(G3, 200);
  beep(G3, 200);
  beep(B3, 200);
  beep(G3, 200);
  beep(C4, 200);
  beep(G3, 200);
  beep(D4, 200);
  beep(C4, 200);
  beep(F3, 200);
  beep(F3, 200);
  beep(AA3, 200);
  beep(F3, 200);
  beep(C4, 200);
  beep(F3, 200);
  beep(C4, 200);
  beep(B3, 200);
}
void secondSection()
{
  beep(AA3, 325);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(G3, 200);
  beep(C4, 200);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(G3, 200);
  beep(E3, 200);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(G3, 200);
  beep(C4, 200);
  beep(AA3, 325);
  beep(AA3, 325);
  beep(AA3, 200);
  beep(AA3, 75);
  beep(AA3, 325);
  beep(AA3, 450);
}

void thirdSection()
{
  beep(AA3, 75);
  beep(E4, 200);
  beep(AA3, 75);
  beep(C4, 200);
  beep(AA3, 75);
  beep(Bb3, 200);
  beep(AA3, 75);
  beep(C4, 200);
  beep(AA3, 75);
  beep(Bb3, 75);
  beep(G3, 200);
  beep(AA3, 75);
  beep(E4, 200);
  beep(AA3, 75);
  beep(C4, 200);
  beep(AA3, 75);
  beep(Bb3, 200);
  beep(AA3, 75);
  beep(C4, 200);
  beep(AA3, 75);
  beep(Bb3, 75);
  beep(G3, 200);
  beep(AA3, 75);
  beep(E4, 200);
  beep(AA3, 75);
  beep(C4, 200);
  beep(AA3, 75);
  beep(Bb3, 200);
  beep(AA3, 75);
  beep(C4, 200);
  beep(AA3, 75);
  beep(Bb3, 75);
  beep(G3, 200);
  beep(AA3, 75);
  beep(E4, 200);
  beep(AA3, 75);
  beep(C4, 200);
  beep(G3, 75);
  beep(G3, 200);
  beep(G3, 75);
  beep(AA3, 200);
  beep(AA3, 450);
}