int button=0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  button = digitalRead(2);
    if (button==HIGH)
  {digitalWrite(13, LOW);}
  else
  {digitalWrite(13, HIGH);}
  
  delay(50); // Wait for 50 millisecond(s)
}
