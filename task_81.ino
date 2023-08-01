#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
const int sensor = A2;
int reading ;
void setup()
{
  pinMode(sensor,INPUT);
  lcd.init();
  lcd.backlight();
// for(int i = 0;i<=10;i++){
 // lcd.print (i);}
  //delay (500);
  //lcd.setCursor(0,0);
  Serial.begin(9600);
  lcd.setCursor(0,0);
  lcd.print ("reading = ");
}

void loop(){
  reading = analogRead(sensor);
 // lcd.setCursor(0,0);
 // lcd.print ("reading = ");
  lcd.setCursor(10,0);
  lcd.print (reading);
  lcd.print ("      ");
//  lcd.clear();
}