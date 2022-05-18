#include <LiquidCrystal_I2C.h>
#include <Wire.h>

unsigned long millisDisplayShow = millis();

LiquidCrystal_I2C lcd(0x27, 20, 4);

void welcome();
void displayShow();

/**********************FUNÇÃO DISPLAY*************************/

void welcome(){
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Deus Seja Louvado!");
  lcd.setCursor(0,1);
  lcd.print("TCC 2022 Robson Lima");
  lcd.setCursor(0,2);
  lcd.print("Projeto Respirador");
  lcd.setCursor(0,3);
  lcd.print("Faculdade Uniandrade");
  delay(3000);
  lcd.clear();
  lcd.backlight();
  }


 void displayShow() {
  if((millis() - millisDisplayShow) < 2){
  lcd.init();
  }else{
  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("      Monitor       ");
  lcd.setCursor(0,1);
  lcd.print("temperatura:");
  lcd.print(bmp180.readTemperature());
  lcd.println(" C ");
  DHT.read11(pinoDHT11);
  lcd.setCursor(0,2);
  lcd.print("Umidade    :");
  lcd.print(DHT.humidity);
  lcd.print(" %");
  lcd.setCursor(0,3);
  lcd.print("Pressao    :");  
  lcd.print(bmp180.readPressure());
  lcd.print(" Pa");
    }
  if((millis() - millisDisplayShow) > 4){
    millisDisplayShow = millis();
  }
}
