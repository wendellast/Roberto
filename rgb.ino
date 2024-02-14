#define t 40
#define t1 40
#define t2 40
#define t3 40

const int ldrPin = 4; // D18 - Pino do LDR
int ldrValue = 0; // Valor do LDR



void setup() {
    // Configura as portas D15, D2, D4 e D5 como saídas
    pinMode(ldrPin, INPUT); // Configura o pino do LDR como entrada
    Serial.begin(9600); // Inicia a comunicação serial

    pinMode(15, OUTPUT);
    pinMode(2, OUTPUT);
    pinMode(18, OUTPUT);
    pinMode(5, OUTPUT);
}

void loop(){
    ldrValue = analogRead(ldrPin); // Lê o valor do LDR
    
    if (ldrValue < 500) {
        effect_1();
        effect_1();

        effect_2();
        effect_2();

        effect_3();
        effect_3();

        effect_4();
        effect_4();

        effect_5();
        effect_5();

        effect_6();
        effect_6();

        effect_7();
        effect_7();
    }
}

//left to right and right to left
void effect_1()
{
    for(int i=15; i<=2; i-=2){
        analogWrite(i, 255); // Define o brilho máximo (255) usando PWM
        delay(t1);
        analogWrite(i-1, 255);
        delay(t1);
        analogWrite(i-2, 255);
        delay(t1);
        analogWrite(i, 0); // Desliga o LED
        delay(t1);
        analogWrite(i-1, 0);
        delay(t1);
    }
    for(int i=2; i<=15; i+=2){
        analogWrite(i, 255);
        delay(t1);
        analogWrite(i-1, 255);
        delay(t1);
        analogWrite(i-2, 255);
        delay(t1);
        analogWrite(i, 0);
        delay(t1);
        analogWrite(i-1, 0);
        delay(t1);
    }
}

void effect_2()
{
    int count = 15; // keeps track of second LED movement

    // move first LED from left to right and second from right to left
    for (int i = 15; i >= 2; i--) {
        clear();
        analogWrite(i, 255); // Define o brilho máximo (255) usando PWM
        analogWrite(count, 255); // Define o brilho máximo (255) usando PWM
        count--;
        // stop LEDs from appearing to stand still in the middle
        if (count != 2) {
            delay(t2);
        }
    }

    // move first LED from right to left and second LED from left to right
    for (int i = 2; i <= 15; i++) {
        clear();
        analogWrite(i, 255); // Define o brilho máximo (255) usando PWM
        analogWrite(count, 255); // Define o brilho máximo (255) usando PWM
        count++;
        // stop LEDs from appearing to stand still in the middle
        if (count != 15) {
            delay(t2);
        }
    }
}

void effect_3()
{
    for(int i=15; i>=2; i--){
        analogWrite(i, 255); // Define o brilho máximo (255) usando PWM
        delay(t3);
    }
    for(int i=15; i>=2; i--){
        analogWrite(i, 0);
        delay(t3);
    }

    for(int i = 2; i<=15; i++){
        analogWrite(i, 255); // Define o brilho máximo (255) usando PWM
        delay(t3);
    }
    for(int i = 2; i<=15; i++){
        analogWrite(i, 0);
        delay(t3);
    }
}

void effect_4()
{
    for(int j = 15; j >= 2; j--){
        analogWrite(j, 255); // Define o brilho máximo (255) usando PWM
        delay(t2);
    }
    for(int j = 15; j >= 2; j--){
        analogWrite(j, 0);
        delay(t2);
    }

    for(int k = 2; k <= 15; k++){
        analogWrite(k, 255); // Define o brilho máximo (255) usando PWM
        delay(t2);
    }
    for(int k = 2; k <= 15; k++){
        analogWrite(k, 0);
        delay(t2);
    }
}

void effect_5()
{
    for(int pin = 15; pin >= 2; pin--)
    {
        analogWrite(pin, 255); // Define o brilho máximo (255) usando PWM
        delay(t1);
        analogWrite(pin+1, 0);
        delay(t1);
    }
    for(int pin = 15; pin >= 2; pin--)
    {
        analogWrite(pin+1, 255); // Define o brilho máximo (255) usando PWM
        delay(t1);
        analogWrite(pin+2, 0);
        delay(t1);
    }
    for(int pin = 15; pin >= 2; pin--)
    {
        analogWrite(pin+2, 255); // Define o brilho máximo (255) usando PWM
        delay(t1);
        analogWrite(pin+3, 0);
        delay(t1);
    }
    for(int pin = 15; pin >= 2; pin--)
    {
        analogWrite(pin+3, 255); // Define o brilho máximo (255) usando PWM
        delay(t1);
        analogWrite(pin+4, 0);
        delay(t1);
    }
}

void effect_6()
{
    for(int j=15; j>=4; j--){
        analogWrite(j, 0);
        delay(t);
        analogWrite(j, 255); // Define o brilho máximo (255) usando PWM
        delay(t);
        analogWrite(j-2, 0);
        delay(t);
        analogWrite(j, 255); // Define o brilho máximo (255) usando PWM
    }
    for(int k = 2; k<=15; k++){
        analogWrite(k, 0);
        delay(t);
        analogWrite(k, 255); // Define o brilho máximo (255) usando PWM
        delay(t);
        analogWrite(k+2, 0);
        delay(t);
        analogWrite(k, 255); // Define o brilho máximo (255) usando PWM
    }
}

void effect_7()
{
    for(int j=15; j>=4; j--){
        analogWrite(j, 255); // Define o brilho máximo (255) usando PWM
        delay(t);
        analogWrite(j-2, 0);
        delay(t);
    }
    for(int k = 2; k<=15; k++){
        analogWrite(k, 255); // Define o brilho máximo (255) usando PWM
        delay(t);
        analogWrite(k+2, 0);
        delay(t);
    }
}

// função para desligar todos os LEDs
void clear(void)
{
    for (int i = 2; i <= 15; i++) {
        analogWrite(i, 0);
    }
}
