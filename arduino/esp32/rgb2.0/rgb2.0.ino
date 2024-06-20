#define LIGHT_SENSOR_PIN 4  // ESP32 pin GIOP36 (ADC0)

int led0 = 2;
int led1 = 18;
int led2 = 5;
int led3 = 15;
int led4 = 2;
int led5 = 18;
int led6 = 5;
int led7 = 15;
int led8 = 2;
int led9 = 18;
int led10 = 5;
int led11 = 15;
int led12 = 2;
int led13 = 18;

int del = 100;

void setup() {
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led12, OUTPUT);
  pinMode(led13, OUTPUT);

  Serial.begin(115200);
}

void loop() {

  int analogValue = analogRead(LIGHT_SENSOR_PIN);

  Serial.print("Analog Value = ");
  Serial.print(analogValue);
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n');
    command.trim();

    if (command == "auto") {
      if (analogValue < 1000) {
        ledsAuto();
       
      }
    } else if (command == "onLedsRobo") {
      ledsAuto();
    }
  }
  ledsAuto();
}


void ledsAuto(){
        blink_1();
        blink_1();
        delay(del);
        blink_2();
        blink_2();
        delay(del);

        blink_3();
        blink_3();
        delay(del);

        blink_4();
        blink_4();
        delay(del);

        blink_5();
        blink_5();
        delay(del);


        blink_6();
        blink_6();

        delay(del);

        blink_7();
        blink_7();
        delay(del);

        blink_8();
        blink_8();
        delay(del);

        blink_9();
        blink_9();
        delay(del);

        blink_10();
        blink_10();
        delay(del);

        blink_11();
        blink_11();
        delay(del);

        blink_12();
        blink_12();
        delay(del);

        blink_13();
        blink_13();
        delay(del);

        blink_14();
        blink_14();
        delay(del);

        blink_15();
        blink_15();
        delay(del);

        blink_16();
        blink_16();
        delay(del);
}

/////////////pattern 1///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_1() {
  int t = 80;





  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led13, HIGH);
  delay(t);

  //////////////////////////



  digitalWrite(led1, LOW);
  delay(t);
  digitalWrite(led2, LOW);
  delay(t);
  digitalWrite(led3, LOW);
  delay(t);
  digitalWrite(led4, LOW);
  delay(t);
  digitalWrite(led5, LOW);
  delay(t);
  digitalWrite(led6, LOW);
  delay(t);
  digitalWrite(led7, LOW);
  delay(t);
  digitalWrite(led8, LOW);
  delay(t);
  digitalWrite(led9, LOW);
  delay(t);
  digitalWrite(led10, LOW);
  delay(t);
  digitalWrite(led11, LOW);
  delay(t);
  digitalWrite(led12, LOW);
  delay(t);
  digitalWrite(led13, LOW);
  delay(t);



  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 2///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_2() {
  int t = 80;

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led9, LOW);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led10, LOW);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led11, LOW);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led12, LOW);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led13, LOW);
  delay(t);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 3///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_3() {
  int t = 150;

  digitalWrite(led1, HIGH);

  digitalWrite(led3, HIGH);

  digitalWrite(led5, HIGH);

  digitalWrite(led7, HIGH);

  digitalWrite(led9, HIGH);

  digitalWrite(led11, HIGH);

  digitalWrite(led13, HIGH);

  digitalWrite(led2, LOW);

  digitalWrite(led4, LOW);

  digitalWrite(led6, LOW);

  digitalWrite(led8, LOW);

  digitalWrite(led10, LOW);

  digitalWrite(led12, LOW);
  delay(t);
  ////////////////
  digitalWrite(led1, LOW);

  digitalWrite(led3, LOW);

  digitalWrite(led5, LOW);

  digitalWrite(led7, LOW);

  digitalWrite(led9, LOW);

  digitalWrite(led11, LOW);

  digitalWrite(led13, LOW);

  digitalWrite(led2, HIGH);

  digitalWrite(led4, HIGH);

  digitalWrite(led6, HIGH);

  digitalWrite(led8, HIGH);

  digitalWrite(led10, HIGH);

  digitalWrite(led12, HIGH);
  delay(t);






  digitalWrite(led1, HIGH);

  digitalWrite(led3, HIGH);

  digitalWrite(led5, HIGH);

  digitalWrite(led7, HIGH);

  digitalWrite(led9, HIGH);

  digitalWrite(led11, HIGH);

  digitalWrite(led13, HIGH);

  digitalWrite(led2, LOW);

  digitalWrite(led4, LOW);

  digitalWrite(led6, LOW);

  digitalWrite(led8, LOW);

  digitalWrite(led10, LOW);

  digitalWrite(led12, LOW);
  delay(t);
  ////////////////
  digitalWrite(led1, LOW);

  digitalWrite(led3, LOW);

  digitalWrite(led5, LOW);

  digitalWrite(led7, LOW);

  digitalWrite(led9, LOW);

  digitalWrite(led11, LOW);

  digitalWrite(led13, LOW);

  digitalWrite(led2, HIGH);

  digitalWrite(led4, HIGH);

  digitalWrite(led6, HIGH);

  digitalWrite(led8, HIGH);

  digitalWrite(led10, HIGH);

  digitalWrite(led12, HIGH);
  delay(t);


  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 4///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_4() {
  int t = 80;

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led2, HIGH);
  delay(t);

  digitalWrite(led3, HIGH);
  digitalWrite(led1, LOW);
  delay(t);

  digitalWrite(led4, HIGH);
  digitalWrite(led2, LOW);
  delay(t);

  digitalWrite(led5, HIGH);
  digitalWrite(led3, LOW);
  delay(t);

  digitalWrite(led6, HIGH);
  digitalWrite(led4, LOW);
  delay(t);

  digitalWrite(led7, HIGH);
  digitalWrite(led5, LOW);
  delay(t);

  digitalWrite(led8, HIGH);
  digitalWrite(led6, LOW);
  delay(t);

  digitalWrite(led9, HIGH);
  digitalWrite(led7, LOW);
  delay(t);

  digitalWrite(led10, HIGH);
  digitalWrite(led8, LOW);
  delay(t);

  digitalWrite(led11, HIGH);
  digitalWrite(led9, LOW);
  delay(t);

  digitalWrite(led12, HIGH);
  digitalWrite(led10, LOW);
  delay(t);

  digitalWrite(led13, HIGH);
  digitalWrite(led11, LOW);
  delay(t);

  digitalWrite(led12, LOW);
  delay(t);

  digitalWrite(led13, LOW);
  delay(t);


  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 5///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_5() {
  int t = 70;

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led9, LOW);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led10, LOW);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led11, LOW);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led12, LOW);
  digitalWrite(led13, HIGH);
  delay(t);


  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led9, LOW);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led10, LOW);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led11, LOW);
  digitalWrite(led12, HIGH);
  delay(t);


  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led9, LOW);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led10, LOW);
  digitalWrite(led11, HIGH);
  delay(t);


  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led9, LOW);
  digitalWrite(led10, HIGH);
  delay(t);

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  delay(t);

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  delay(t);

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(t);

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(t);

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(t);

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(t);

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t);

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);


  digitalWrite(led1, HIGH);
  delay(t);




  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 6///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_6() {
  int t = 70;

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led9, LOW);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led10, LOW);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led11, LOW);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led12, LOW);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led13, LOW);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led12, LOW);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led11, LOW);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led10, LOW);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led9, LOW);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led8, LOW);
  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led1, HIGH);
  delay(t);


  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led8, LOW);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led9, LOW);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led10, LOW);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led11, LOW);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led12, LOW);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led13, LOW);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led12, LOW);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led11, LOW);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led10, LOW);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led9, LOW);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led8, LOW);
  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led1, HIGH);
  delay(t);



  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 7///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_7() {
  int t = 60;

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led13, HIGH);
  delay(t);


  digitalWrite(led1, LOW);
  delay(t);
  digitalWrite(led2, LOW);
  delay(t);
  digitalWrite(led3, LOW);
  delay(t);
  digitalWrite(led4, LOW);
  delay(t);
  digitalWrite(led5, LOW);
  delay(t);
  digitalWrite(led6, LOW);
  delay(t);
  digitalWrite(led7, LOW);
  delay(t);
  digitalWrite(led8, LOW);
  delay(t);
  digitalWrite(led9, LOW);
  delay(t);
  digitalWrite(led10, LOW);
  delay(t);
  digitalWrite(led11, LOW);
  delay(t);
  digitalWrite(led12, LOW);
  delay(t);
  digitalWrite(led13, LOW);
  delay(t);


  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led5, HIGH);
  delay(t);
  digitalWrite(led4, HIGH);
  delay(t);
  digitalWrite(led3, HIGH);
  delay(t);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led1, HIGH);
  delay(t);

  digitalWrite(led13, LOW);
  delay(t);
  digitalWrite(led12, LOW);
  delay(t);
  digitalWrite(led11, LOW);
  delay(t);
  digitalWrite(led10, LOW);
  delay(t);
  digitalWrite(led9, LOW);
  delay(t);
  digitalWrite(led8, LOW);
  delay(t);
  digitalWrite(led7, LOW);
  delay(t);
  digitalWrite(led6, LOW);
  delay(t);
  digitalWrite(led5, LOW);
  delay(t);
  digitalWrite(led4, LOW);
  delay(t);
  digitalWrite(led3, LOW);
  delay(t);
  digitalWrite(led2, LOW);
  delay(t);
  digitalWrite(led1, LOW);
  delay(t);




  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 8///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_8() {
  int t = 70;

  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);

  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  delay(t);



  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);

  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  delay(t);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 9///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_9() {
  int t = 70;

  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);

  digitalWrite(led8, LOW);
  digitalWrite(led6, LOW);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  delay(t);

  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);

  digitalWrite(led8, LOW);
  digitalWrite(led6, LOW);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  delay(t);

  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);

  digitalWrite(led8, LOW);
  digitalWrite(led6, LOW);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  delay(t);


  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 10///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_10() {
  int t = 100;


  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  digitalWrite(led11, HIGH);
  digitalWrite(led12, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);


  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
  delay(t);


  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  digitalWrite(led11, HIGH);
  digitalWrite(led12, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);


  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
  delay(t);

  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  digitalWrite(led11, HIGH);
  digitalWrite(led12, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);


  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
  delay(t);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 11///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_11() {
  int t = 80;

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led2, HIGH);
  delay(t);

  digitalWrite(led3, HIGH);
  digitalWrite(led1, LOW);
  delay(t);

  digitalWrite(led4, HIGH);
  digitalWrite(led2, LOW);
  delay(t);

  digitalWrite(led5, HIGH);
  digitalWrite(led3, LOW);
  delay(t);

  digitalWrite(led6, HIGH);
  digitalWrite(led4, LOW);
  delay(t);

  digitalWrite(led7, HIGH);
  digitalWrite(led5, LOW);
  delay(t);

  digitalWrite(led8, HIGH);
  digitalWrite(led6, LOW);
  delay(t);

  digitalWrite(led9, HIGH);
  digitalWrite(led7, LOW);
  delay(t);

  digitalWrite(led10, HIGH);
  digitalWrite(led8, LOW);
  delay(t);

  digitalWrite(led11, HIGH);
  digitalWrite(led9, LOW);
  delay(t);

  digitalWrite(led12, HIGH);
  digitalWrite(led10, LOW);
  delay(t);

  digitalWrite(led13, HIGH);
  digitalWrite(led11, LOW);
  delay(t);

  digitalWrite(led12, LOW);
  delay(t);

  digitalWrite(led13, LOW);
  delay(t);


  digitalWrite(led13, HIGH);
  delay(t);

  digitalWrite(led12, HIGH);
  delay(t);

  digitalWrite(led11, HIGH);
  digitalWrite(led13, LOW);
  delay(t);

  digitalWrite(led10, HIGH);
  digitalWrite(led12, LOW);
  delay(t);

  digitalWrite(led9, HIGH);
  digitalWrite(led11, LOW);
  delay(t);

  digitalWrite(led8, HIGH);
  digitalWrite(led10, LOW);
  delay(t);

  digitalWrite(led7, HIGH);
  digitalWrite(led9, LOW);
  delay(t);

  digitalWrite(led6, HIGH);
  digitalWrite(led8, LOW);
  delay(t);

  digitalWrite(led5, HIGH);
  digitalWrite(led7, LOW);
  delay(t);

  digitalWrite(led4, HIGH);
  digitalWrite(led6, LOW);
  delay(t);

  digitalWrite(led3, HIGH);
  digitalWrite(led5, LOW);
  delay(t);

  digitalWrite(led2, HIGH);
  digitalWrite(led4, LOW);
  delay(t);

  digitalWrite(led1, HIGH);
  digitalWrite(led3, LOW);
  delay(t);

  digitalWrite(led2, LOW);
  delay(t);

  digitalWrite(led1, LOW);
  delay(t);









  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 12///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_12() {
  int t = 80;

  digitalWrite(led1, HIGH);
  delay(t);
  digitalWrite(led2, HIGH);
  delay(t);
  digitalWrite(led3, HIGH);
  delay(t);

  digitalWrite(led4, HIGH);
  digitalWrite(led1, LOW);
  delay(t);

  digitalWrite(led5, HIGH);
  digitalWrite(led2, LOW);
  delay(t);

  digitalWrite(led6, HIGH);
  digitalWrite(led3, LOW);
  delay(t);

  digitalWrite(led7, HIGH);
  digitalWrite(led4, LOW);
  delay(t);

  digitalWrite(led8, HIGH);
  digitalWrite(led5, LOW);
  delay(t);

  digitalWrite(led9, HIGH);
  digitalWrite(led6, LOW);
  delay(t);

  digitalWrite(led10, HIGH);
  digitalWrite(led7, LOW);
  delay(t);

  digitalWrite(led11, HIGH);
  digitalWrite(led8, LOW);
  delay(t);

  digitalWrite(led12, HIGH);
  digitalWrite(led9, LOW);
  delay(t);

  digitalWrite(led13, HIGH);
  digitalWrite(led10, LOW);
  delay(t);

  digitalWrite(led11, LOW);
  delay(t);
  digitalWrite(led12, LOW);
  delay(t);
  digitalWrite(led13, LOW);
  delay(t);

  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led11, HIGH);
  delay(t);

  digitalWrite(led10, HIGH);
  digitalWrite(led13, LOW);
  delay(t);
  digitalWrite(led9, HIGH);
  digitalWrite(led12, LOW);
  delay(t);
  digitalWrite(led8, HIGH);
  digitalWrite(led11, LOW);
  delay(t);
  digitalWrite(led7, HIGH);
  digitalWrite(led10, LOW);
  delay(t);
  digitalWrite(led6, HIGH);
  digitalWrite(led9, LOW);
  delay(t);
  digitalWrite(led5, HIGH);
  digitalWrite(led8, LOW);
  delay(t);
  digitalWrite(led4, HIGH);
  digitalWrite(led7, LOW);
  delay(t);
  digitalWrite(led3, HIGH);
  digitalWrite(led6, LOW);
  delay(t);
  digitalWrite(led2, HIGH);
  digitalWrite(led5, LOW);
  delay(t);
  digitalWrite(led1, HIGH);
  digitalWrite(led4, LOW);
  delay(t);
  digitalWrite(led3, LOW);
  delay(t);
  digitalWrite(led2, LOW);
  delay(t);
  digitalWrite(led1, LOW);
  delay(t);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 13///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_13() {
  int t = 90;
  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  delay(t);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  delay(t);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  delay(t);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  delay(t);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  delay(t);
  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  delay(t);
  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  delay(t);
  digitalWrite(led8, HIGH);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  delay(t);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  delay(t);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  delay(t);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  delay(t);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  delay(t);
  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  delay(t);


  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  delay(t);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  delay(t);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  delay(t);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  delay(t);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  delay(t);
  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  delay(t);
  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  delay(t);
  digitalWrite(led8, HIGH);
  digitalWrite(led6, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  delay(t);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  delay(t);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  delay(t);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  delay(t);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  delay(t);
  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  delay(t);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 14///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_14() {
  int t = 80;

  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  delay(t);

  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  delay(t);

  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  delay(t);

  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  delay(t);

  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  delay(t);

  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  delay(t);


  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led13, LOW);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////pattern 15///////////////////////////////////////////////////////////////////////////////////////////////////
void blink_15() {
  int t = 80;
  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  delay(t);

  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  delay(t);

  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);

  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  delay(t);

  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);
  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  delay(t);

  digitalWrite(led7, HIGH);
  delay(t);
  digitalWrite(led7, LOW);
  delay(t);

  digitalWrite(led6, HIGH);
  digitalWrite(led8, HIGH);
  delay(t);

  digitalWrite(led6, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led5, HIGH);
  digitalWrite(led9, HIGH);
  delay(t);
  digitalWrite(led5, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led10, HIGH);
  delay(t);
  digitalWrite(led4, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led11, HIGH);
  delay(t);
  digitalWrite(led3, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led12, HIGH);
  delay(t);
  digitalWrite(led2, LOW);
  digitalWrite(led12, LOW);
  digitalWrite(led1, HIGH);
  digitalWrite(led13, HIGH);
  delay(t);
  digitalWrite(led1, LOW);
  digitalWrite(led13, LOW);
  delay(t);
}


void blink_16() {
  int t = 80;
}