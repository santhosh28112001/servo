                                 //create servo object to control a servo
#include <Servo.h>
const int buttonPin=2;
const int servoPin=9;
int buttonState=0;
Servo myservo;
int pos=0;

void setup()
{
  pinMode(buttonPin,INPUT_PULLUP);
  myservo.attach(9);
}
void loop()
{
buttonState=digitalRead(buttonPin);{
if(buttonState==HIGH);
for (pos=0; pos<=120; pos+=10)
{
  myservo.write(pos);
  delay(10);
}
}
}
  
