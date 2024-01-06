#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address for a 16 chars and 2 line display

void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);

  // for display
  lcd.init();
  lcd.clear();
  lcd.backlight();

  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8,HIGH);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("State: OFF");
  delay(1000);
  
  digitalWrite(8,LOW);
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("State: ON");
  delay(1000);
}
