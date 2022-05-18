#include <Adafruit_BMP085.h>
#include "dht.h"
Adafruit_BMP085 bmp180;
const int pinoDHT11 = A0;
const int stepPin = 9;
const int dirPin = 10;
const int enPin = 11;
const int LimitSwitch_LEFT_Pin = 12;
const int LimitSwitch_RIGHT_Pin = 13;
dht DHT;
String command = "";
char v;
int velocity = 3;
float relacaoIE = 1.5;
extern void welcome();
extern void displayShow();

void setup() {
  Serial.begin(9600);
  pinMode(LimitSwitch_LEFT_Pin, INPUT);
  pinMode(LimitSwitch_RIGHT_Pin, INPUT);
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(enPin, OUTPUT);
  digitalWrite(enPin, LOW);
  digitalWrite(dirPin, HIGH);
  
  welcome();
  
  if (!bmp180.begin()) {
    Serial.println("Sensor nao encontrado!");
    while (1) {}
  }
  displayShow();
}


void loop() {
  int leftSw = digitalRead(LimitSwitch_LEFT_Pin);
  int rightSw = digitalRead(LimitSwitch_RIGHT_Pin);
  
  
  
  if (Serial.available() > 0) {
    v = Serial.read();
    
    //Serial.println(pausa);
    command += v;
    switch (v) {
      case '1':
        velocity = 250;
        break;
      case '2':
        velocity = 200;
        break;
      case '3':
        velocity = 150;
        break;
      case '4':
        velocity = 100;
        break;
      case '5':
        velocity = 50;
        break;
      case '6':
        velocity = 0;
        break;
      case 'x':
        relacaoIE = 1.5;
        break;
      case 'y':
        relacaoIE = 2;
        break;
      default:
        //velocity = 5;
        break;
    }
  }

  if (leftSw == LOW && rightSw == HIGH || (digitalRead(dirPin) == LOW)) {
    digitalWrite(dirPin, LOW);
    motorStepA(1);
    }

  if (rightSw == LOW && leftSw == HIGH || (digitalRead(dirPin) == HIGH)) {
    digitalWrite(dirPin, HIGH);
    motorStepB(1);
  }
}

void motorStepA(int MAX) {  //indo para fim de curso - Manter valor maior
  for (int x = 0; x < MAX; x++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(relacaoIE * (550 + velocity)); //825
    digitalWrite(stepPin, LOW);
    delayMicroseconds(relacaoIE * (550 + velocity));//825
  
  }
}
void motorStepB(int MAX) {  //voltando para home
  for (int x = 0; x < MAX; x++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(550 + velocity); //550
    digitalWrite(stepPin, LOW);
    delayMicroseconds(550 + velocity); //550
  }
}
