#include <Servo.h>
Servo servo_9;

int potpin = A1;
int val;



void setup()
{
  servo_9.attach(9);
}

void loop()
{
    val = analogRead(potpin);
    val = map(val, 0, 1023, 0, 179);
    servo_9.write(val);
    delay(15); // Wait for 15 millisecond(s)
  }
  
