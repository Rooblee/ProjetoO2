/*******************************************************************************************************************
 * (utilizar 2 placas arduino) - PLACA ARDUINO A
 * Este código controla display e demais sensores
 * Para controlar motor utilizar com arquivo PrototipoV3A
 * 
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

#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <Adafruit_BMP085.h>

Adafruit_BMP085 bmp180;

unsigned long millisDisplayShow = millis();
LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup(){
  welcome();
  Serial.begin(9600); //INICIALIZA A SERIAL
if (!bmp180.begin()) {
    Serial.println("Sensor nao encontrado!");
    while (1) {}
  }
}




void loop(){
  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("      Monitor       ");
  lcd.setCursor(0,1);
  lcd.print("                    ");
  lcd.setCursor(0,2);
  lcd.print("temperatura:");
  lcd.print(bmp180.readTemperature());
  lcd.print(" C ");
  lcd.setCursor(0,3);
  lcd.print("Pressao    :");  
  lcd.print(bmp180.readPressure());
  lcd.print(" Pa ");
}

  void welcome(){
  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Deus Seja Louvado!");
  lcd.setCursor(0,1);
  lcd.print("TCC 2022 Robson Lima");
  lcd.setCursor(0,2);
  lcd.print("Projeto Respirador");
  lcd.setCursor(0,3);
  lcd.print("Faculdade Uniandrade");
  delay(1000);
  lcd.clear();
  lcd.backlight();
  }
