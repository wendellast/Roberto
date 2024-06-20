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
const int buzzerPin = 9;

int botaoPin = 8;


const int ledPin1 = 13;
const int ledPin2 = 13;
 
int counters = 0;



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

  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);

  pinMode(buzzerPin, OUTPUT);
  pinMode(botaoPin, INPUT);
  Serial.begin(115200);

  pinMode(A3, OUTPUT);
  pinMode(A4, OUTPUT);

}

void loop()
{
  digitalWrite(A3, HIGH);
  digitalWrite(A4, HIGH);
  xz = random(1, 5);
 

  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n'); 
    command.trim(); 
    
    if (command == "randomMusic") {
      music(xz);
    } else if (command == "oneMusic") {
      xz = 1; // barulho
      music(xz);
    } else if (command == "twoMusic"){
      xz = 2; // sirene
      music(xz);
    } else if (command == "threMusic"){
      xz = 3; //
      music(xz);
    } else if (command == "fourMusic"){
      xz = 4;
      music(xz);}
  }




  if (digitalRead(botaoPin) == HIGH)
  {

    music(xz);
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



void music(int xz)
{

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
    tone(buzzerPin, f5s);
    delay(Qnote + Enote);
    noTone(buzzerPin);
    delay(50);

    tone(buzzerPin, d5);
    delay(Hnote);
    noTone(buzzerPin);
    delay(50);

    tone(buzzerPin, d5);
    delay(Snote);
    noTone(buzzerPin);
    delay(12.5);

    tone(buzzerPin, e5);
    delay(Snote);
    noTone(buzzerPin);
    delay(50);

    tone(buzzerPin, f5);
    delay(Enote + Snote);
    noTone(buzzerPin);
    delay(25);

    tone(buzzerPin, e5);
    delay(Enote + Snote);
    noTone(buzzerPin);
    delay(25);

    tone(buzzerPin, d5);
    delay(Enote);
    noTone(buzzerPin);
    delay(50);

    tone(buzzerPin, c5s);
    delay(Enote + Snote);
    noTone(buzzerPin);
    delay(25);

    tone(buzzerPin, d5);
    delay(Enote + Snote);
    noTone(buzzerPin);
    delay(25);

    tone(buzzerPin, e5);
    delay(Enote);
    noTone(buzzerPin);
    delay(25);

    tone(buzzerPin, f5s);
    delay(Qnote + Enote);
    noTone(buzzerPin);
    delay(50);

    tone(buzzerPin, b5);
    delay(Qnote + Enote);
    noTone(buzzerPin);
    delay(50);

    tone(buzzerPin, b4);
    delay(Enote);
    noTone(buzzerPin);
    delay(25);

    tone(buzzerPin, c5s);
    delay(Enote);
    noTone(buzzerPin);
    delay(50);

    tone(buzzerPin, d5);
    delay(Enote + Snote);
    noTone(buzzerPin);
    delay(25);

    tone(buzzerPin, e5);
    delay(Enote + Snote);
    noTone(buzzerPin);
    delay(25);

    tone(buzzerPin, d5);
    delay(Enote);
    noTone(buzzerPin);
    delay(25);

    tone(buzzerPin, c5s);
    delay(Enote + Snote);
    noTone(buzzerPin);
    delay(25);

    tone(buzzerPin, a5);
    delay(Enote + Snote);
    noTone(buzzerPin);
    delay(25);

    tone(buzzerPin, g5);
    delay(Enote);
    noTone(buzzerPin);
    delay(50);

    tone(buzzerPin, f6s);
    delay(Qnote + Enote);
    noTone(buzzerPin);
    delay(50);

    tone(buzzerPin, d6);
    delay(Hnote);
    noTone(buzzerPin);
    delay(50);

    tone(buzzerPin, d6);
    delay(Snote);
    noTone(buzzerPin);
    delay(12.5);

    tone(buzzerPin, e6);
    delay(Snote);
    noTone(buzzerPin);
    delay(50);

    tone(buzzerPin, f6);
    delay(Enote + Snote);
    noTone(buzzerPin);
    delay(25);

    tone(buzzerPin, e6);
    delay(Enote + Snote);
    noTone(buzzerPin);
    delay(25);

    tone(buzzerPin, d6);
    delay(Enote);
    noTone(buzzerPin);
    delay(50);

    tone(buzzerPin, c6s);
    delay(Enote + Snote);
    noTone(buzzerPin);
    delay(25);

    tone(buzzerPin, d6);
    delay(Enote + Snote);
    noTone(buzzerPin);
    delay(25);

    tone(buzzerPin, e6);
    delay(Enote);
    noTone(buzzerPin);
    delay(25);

    tone(buzzerPin, f6s);
    delay(Qnote + Enote);
    noTone(buzzerPin);
    delay(50);

    tone(buzzerPin, b6);
    delay(Qnote + Enote);
    noTone(buzzerPin);
    delay(50);

    tone(buzzerPin, b6);
    delay(Enote);
    noTone(buzzerPin);
    delay(50);

    tone(buzzerPin, c7s);
    delay(Enote);
    noTone(buzzerPin);
    delay(25);

    tone(buzzerPin, d7);
    delay(Enote + Snote);
    noTone(buzzerPin);
    delay(25);

    tone(buzzerPin, g6);
    delay(Enote + Snote);
    noTone(buzzerPin);
    delay(25);

    tone(buzzerPin, f6s);
    delay(Enote);
    noTone(buzzerPin);
    delay(50);

    tone(buzzerPin, f6);
    delay(Snote + Enote);
    noTone(buzzerPin);
    delay(25);

    tone(buzzerPin, d7);
    delay(Enote + Snote);
    noTone(buzzerPin);
    delay(25);

    tone(buzzerPin, a6s);
    delay(Enote);
    noTone(buzzerPin);
    delay(25);

    tone(buzzerPin, b6);
    delay(Qnote);
    noTone(buzzerPin);
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


void beep2(int note, int duration)
{
  //Play tone on buzzerPin
  tone(buzzerPin, note, duration);
 
 
  //Play different LED depending on value of 'counter'
  if(counters % 2 == 0)
  {
    digitalWrite(A3, HIGH);
    delay(duration);
    digitalWrite(A3, LOW);
  }else
  {
    digitalWrite(A4, HIGH);
    delay(duration);
    digitalWrite(A4, LOW);
  }
 
  //Stop tone on buzzerPin
  noTone(buzzerPin);
 
  delay(50);
 
  //Increment counter
  counters++;
}


 
void firstSection()
{
  beep2(AA3, 200);
  beep2(AA3, 200);
  beep2(C4, 200);
  beep2(AA3, 200);
  beep2(D4, 200);
  beep2(AA3, 200);
  beep2(E4, 200);
  beep2(D4, 200);
  beep2(C4, 200);
  beep2(C4, 200);
  beep2(E4, 200);
  beep2(C4, 200);
  beep2(G4, 200);
  beep2(C4, 200);
  beep2(E4, 200);
  beep2(C4, 200);
  beep2(G3, 200);
  beep2(G3, 200);
  beep2(B3, 200);
  beep2(G3, 200);
  beep2(C4, 200);
  beep2(G3, 200);
  beep2(D4, 200);
  beep2(C4, 200);
  beep2(F3, 200);
  beep2(F3, 200);
  beep2(AA3, 200);
  beep2(F3, 200);
  beep2(C4, 200);
  beep2(F3, 200);
  beep2(C4, 200);
  beep2(B3, 200);
  
}
void secondSection()
{
  beep2(AA3, 325);
  beep2(AA3, 325);
  beep2(AA3, 325);
  beep2(AA3, 325);
  beep2(G3, 200);
  beep2(C4, 200);
  beep2(AA3, 325);
  beep2(AA3, 325);
  beep2(AA3, 325);
  beep2(AA3, 325);
  beep2(G3, 200);
  beep2(E3, 200);
  beep2(AA3, 325);
  beep2(AA3, 325);
  beep2(AA3, 325);
  beep2(AA3, 325);
  beep2(G3, 200);
  beep2(C4, 200);
  beep2(AA3, 325);
  beep2(AA3, 325);
  beep2(AA3, 200);
  beep2(AA3, 75);
  beep2(AA3, 325);
  beep2(AA3, 450);
}

void thirdSection()
{
  beep2(AA3, 75);
  beep2(E4, 200);
  beep2(AA3, 75);
  beep2(C4, 200);
  beep2(AA3, 75);
  beep2(Bb3, 200);
  beep2(AA3, 75);
  beep2(C4, 200);
  beep2(AA3, 75);
  beep2(Bb3, 75);
  beep2(G3, 200);
  beep2(AA3, 75);
  beep2(E4, 200);
  beep2(AA3, 75);
  beep2(C4, 200);
  beep2(AA3, 75);
  beep2(Bb3, 200);
  beep2(AA3, 75);
  beep2(C4, 200);
  beep2(AA3, 75);
  beep2(Bb3, 75);
  beep2(G3, 200);
  beep2(AA3, 75);
  beep2(E4, 200);
  beep2(AA3, 75);
  beep2(C4, 200);
  beep2(AA3, 75);
  beep2(Bb3, 200);
  beep2(AA3, 75);
  beep2(C4, 200);
  beep2(AA3, 75);
  beep2(Bb3, 75);
  beep2(G3, 200);
  beep2(AA3, 75);
  beep2(E4, 200);
  beep2(AA3, 75);
  beep2(C4, 200);
  beep2(G3, 75);
  beep2(G3, 200);
  beep2(G3, 75);
  beep2(AA3, 200);
  beep2(AA3, 450);
}