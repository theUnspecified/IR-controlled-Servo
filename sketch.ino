#include <Servo.h>
int ir;

Servo myservo; //making a Servo object

void setup()
{
  myservo.attach(9); //using servo's signal pin at 9
  pinMode(A0, INPUT);


}

void loop()
{

	ir = analogRead(A0);
	int value = map(ir, 1000, 30, 180, 0) // mapping the ir value in the range of 0 to 180, please visit arduino.cc for details
        myservo.write(value);
        delay(100); //making a delay to work properly
}
