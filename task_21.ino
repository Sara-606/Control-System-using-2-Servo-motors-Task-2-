

#include <Servo.h>

Servo M1;
Servo M2;

void setup()
{
  M1.attach(2);
  M2.attach(4); 
}

void loop()
{

int x=0;
int y=180;
  
  while (x<=180 || y>=0 ){
    M1.write(x);
    M2.write(y);
    delay(500);
    x=x+2;
    y=y-2;
  }
}