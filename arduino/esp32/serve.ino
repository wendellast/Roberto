const int ledPin = 2; 

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(115200); 
}

void loop() {
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n');
    command.trim(); 
    
    if (command == "on") {
      digitalWrite(ledPin, HIGH); 
    } else if (command == "off") {
      digitalWrite(ledPin, LOW); 
    }
  }
}
