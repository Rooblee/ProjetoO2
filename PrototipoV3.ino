/*******************************************************************************************************************
 * Faculdade Uniandrade. Curso de Ciência da computação. Maio de 2022.
 * Projeto O2. Construção de um respirador de baixo custo, emergencial e transitório para pacientes da COVID-19.
 * ALUNO: ROBSON LIMA DE OLIVEIRA.
 * 
 * Link para aplicativo android: https://gallery.appinventor.mit.edu/?galleryid=a930762d-689b-467f-8bb3-03f27a24e7de
 * Link para códigos deste projeto no GitHub: https://github.com/Rooblee/ProjetoO2
 * Link para vídeo no YouTube: https://youtu.be/H_RcWayBs60
 * Informação de configuração do DRIVE TB6600: 200 Passos, entre 2 e 2.2 Ampéres.
 *  
 *      1   2   3   4   5   6
 *     ON  ON  OFF ON  OFF OFF
 *     
 *******************************************************************************************************************
 */


const int stepPin = 9;
const int dirPin = 10;
const int enPin = 11;
const int LimitSwitch_LEFT_Pin = 12;
const int LimitSwitch_RIGHT_Pin = 13;
String command = "";
char v;
int velocity = 3;
float relacaoIE = 1.5;

void setup() {
  Serial.begin(9600);
  pinMode(LimitSwitch_LEFT_Pin, INPUT);
  pinMode(LimitSwitch_RIGHT_Pin, INPUT);
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(enPin, OUTPUT);
  digitalWrite(enPin, LOW);
  digitalWrite(dirPin, HIGH);
} 

void loop() {
  int leftSw = digitalRead(LimitSwitch_LEFT_Pin);
  int rightSw = digitalRead(LimitSwitch_RIGHT_Pin);
  
  if (Serial.available() > 0) {
    v = Serial.read();
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
