#include <IRremote.h>
int irpin=12;
int pwmpin=6;
IRrecv irrecv(irpin);
decode_results results;

void setup()
{
  pinMode(pwmpin, OUTPUT);
  Serial.begin(9600);
  irrecv.enableIRIn();
  
}

void loop()
{
  
  if(irrecv.decode(&results)){
  Serial.println(results.value, HEX);
  irrecv.resume();
  
    if (results.value==0xFD08F7){
      for (int i=0;i<62;i++){digitalWrite(pwmpin,HIGH);
                           delay(10);
                            digitalWrite(pwmpin, LOW);
                            }
    }
  
  else if(results.value==0xFD8877)
  {for (int i=0;i<62;i++){digitalWrite(pwmpin,LOW);
                         delay(10);
                         digitalWrite(pwmpin, HIGH);
   }
  }
 }
}
