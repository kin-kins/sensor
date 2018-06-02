void setup() {
  // put your setup code here, to run once:
pinMode(4,INPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(7,OUTPUT);

}
int z;
void loop() {
  // put your main code here, to run repeatedly:
z=digitalRead(4);
if(z==1)
{
  digitalWrite(7,0);
  digitalWrite(2,1);
  digitalWrite(3,0);
}
else 
{
digitalWrite(7,1);
digitalWrite(2,0);
digitalWrite(3,0);
}
delay(200);
}
