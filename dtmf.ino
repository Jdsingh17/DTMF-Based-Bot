void setup() {
pinMode(0,INPUT);
pinMode(1,INPUT);
pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
}

void loop() 
{
  int g0=digitalRead(0);
  int g1=digitalRead(1);
  int g2=digitalRead(2);
  int g3=digitalRead(3);
  {
  if( g0==0 && g1==0 && g2==0 && g3==0)
  stop1();
  else if( g0==0 && g1==0 && g2==1 && g3==0)
  forward();
  else if( g0==1 && g1==0 && g2==0 && g3==0)
  backward();
  else if( g0==0 && g1==1 && g2==0 && g3==0)
  left();
  else if( g0==0 && g1==1 && g2==1 && g3==0)
  right();
  }

}
void right()
{
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
}
void stop1()
{
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
}
void forward()
{
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
}
void backward()
{
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,LOW);
}
void left()
{
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
}

