#include <LiquidCrystal.h>
#include <Servo.h>

//display pins
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.leftToRight();
  lcd.setCursor(0,0);
  lcd.print("Lcd test");
}

void loop() {
  // put your main code here, to run repeatedly:
  for(byte n = 0; n < 255; n++){
    Serial.write(n);
    lcd.setCursor(0,1);
    if(n<100){
      lcd.print(" ");
    }
    if(n<10){
      lcd.print(" ");
    }
    lcd.print(n);
    delay(1000);
  }
}
