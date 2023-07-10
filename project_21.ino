int led = 12;
int pushbutton = 10;
int Reading = 0;
void setup()
{
  pinMode(12,OUTPUT);
  pinMode(10,INPUT);
}
void loop()
{
  Reading = digitalRead(pushbutton);
  if (Reading == HIGH)
  {digitalWrite(12,HIGH);
  }
  else
  {
    digitalWrite(12,LOW);
  }
  
  
}
  
  
  