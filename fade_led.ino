void setup() {
  // put your setup code here, to run once:
pinMode(4,OUTPUT);
pinMode(3,OUTPUT);
digitalWrite(4,0);
}

int xount=10;
void loop() {
  digitalWrite(4,0);
  // put your main code here, to run repeatedly:
for(int i=0;i<255;i++)
{analogWrite(3,i);
delay(10);
}
for(int j=255;j>0;j--)
{analogWrite(3,j);
delay(10);
}

}
