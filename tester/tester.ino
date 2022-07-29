#include <LiquidCrystal.h>
#define DIODE_DROP 0.7
LiquidCrystal lcd(13,12,11,10,9,8);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.print("Battary ");
}

void loop() {
  // put your main code here, to run repeatedly:
  float voltage = analogRead(A0) / 1024.0 * 10.0;
  if (voltage > 0.1)
    voltage +=DIODE_DROP;
  lcd.setCursor(1,0);
  lcd.print(voltage, 2);
  lcd.print("Volts");
}
