

#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int t,starts,counter=0;int timeset;int minutes=1;
void setup() {
  lcd.begin(16,2);
  lcd.clear();
  lcd.setCursor(0,0);

pinMode(9,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(10,INPUT);  
pinMode(13,INPUT); 
  }

void loop() {
  
  delay(10);
  t=millis()/1000;
  starts=digitalRead(13);
  if(starts==0)
  t=0;
  timeset=digitalRead(10);
  if(timeset==0)
  minutes++;

  if(t==minutes*60)
  {
    digitalWrite(6,1);
  digitalWrite(7,0);
  }
  
  lcd.setCursor(0,0);
  lcd.print(minutes);
  lcd.setCursor(0,1);
  lcd.print(t);
  




  
}
