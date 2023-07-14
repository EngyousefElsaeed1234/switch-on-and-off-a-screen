int led = 12;
int pushbutton = 10;
int pushButtonStatus;
  int ledStatus;
void setup()
{
  pinMode(12,OUTPUT);
  pinMode(10,INPUT);
}
void loop()
{
  pushButtonStatus = digitalRead(pushbutton);
  if (pushButtonStatus == 1)
  {if( ledStatus == 0)
  {
  
    digitalWrite(led,HIGH);
   ledStatus = 1;
    delay(250);
  }
   else {digitalWrite(led,LOW);
         ledStatus = 0;
         delay(250);
        }
  }
}
  
  
  
  
  
  
