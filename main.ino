#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

int button = 7;
int buzzer = 8;  // Buzzer

void setup() {
  pinMode(button, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print("Lifeline AI");

  lcd.setCursor(0,1);
  lcd.print("Scanner Ready");
}

void loop() {
  if(digitalRead(button) == LOW){
    lcd.clear();
    lcd.print("Scanning QR...");

    for(int i=0;i<3;i++){
      tone(buzzer, 1000, 200); 
      delay(250);
    }
    noTone(buzzer); 

    lcd.clear();
    lcd.print("Blood: O+");
    lcd.setCursor(0,1);
    lcd.print("Allergy: None");
    delay(3000);

    lcd.clear();
    lcd.print("Disease: Asthma");
    lcd.setCursor(0,1);
    lcd.print("Med: Ventolin");
    delay(4000);

    lcd.clear();
    lcd.print("Scanner Ready");
  }
}
