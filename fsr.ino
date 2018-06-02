void setup() {
  Serial.begin(9600);
}
int a;
void loop() 
{
  
a=analogRead(A0);
Serial.println(a);
delay(300);
}
