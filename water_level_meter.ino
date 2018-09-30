void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
pinMode(4,INPUT);
pinMode(5,INPUT);
pinMode(6,INPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
int c =digitalRead(4);
int d =digitalRead(5);
int e =digitalRead(6);



if(c==0)
{digitalWrite(7,HIGH);
digitalWrite(8,LOW);
delay(10);
}
else
digitalWrite(7,0);
//delay(500);


if(d==0)
{digitalWrite(9,HIGH);
digitalWrite(10,LOW);
delay(10);
}
else
digitalWrite(9,0);




if(e==0)
{digitalWrite(11,HIGH);
digitalWrite(12,LOW);
delay(10);
}
else
digitalWrite(11,0);
delay(500);


Serial.print("HOUSE----- ");
Serial.println(c);
Serial.print("PIPELINE-- ");
Serial.println(d);
Serial.print("TANK------ ");
Serial.println(e);
}
