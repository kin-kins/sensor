#define trigPin 2
#define echoPin 3


void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode( 8,OUTPUT);
pinMode( 9,OUTPUT);
pinMode( 10,OUTPUT);
pinMode( 11,OUTPUT);
}
void forward()
{
  digitalWrite(8,1);
  digitalWrite(9,0);
  digitalWrite(10,1);
  digitalWrite(11,0);
  
  
}
void reverse()
{
  digitalWrite(8,0);
  digitalWrite(9,0);
  digitalWrite(10,0);
  digitalWrite(11,0);
  
}

void left()
{
  digitalWrite(8,0);
  digitalWrite(9,1);
  
  digitalWrite(10,1);
  digitalWrite(11,0);
  
  
}


void right()
{
  digitalWrite(8,1);
  digitalWrite(9,0);
 
  digitalWrite(10,0);
  digitalWrite(11,1);

  
}
char z;
void loop() {






 z=Serial.read();

if(z=='1')
forward();
else if(z=='2')
reverse();
else if(z=='3')
right();
else if(z=='4')
left(); 
  long duration, distance;
  digitalWrite(trigPin, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin, HIGH);
//  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  if (distance >= 200 || distance <= 0){
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  delay(500);
}
