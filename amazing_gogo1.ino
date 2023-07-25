
int led=3
  int button1=4;
  int button2=5;
  int reading1=0;
   int reading2=0;
    int i=0;
void setup()
{
  pinMode(led,OUTPUT);
   pinMode(	button1,INPUT);
  pinMode(	button2,INPUT);}
}
void loop()
{
reading1=digitalRead(button1);
  if(reading1==1&&i<=255)  
  {
    analogWrite(led,i);
    i+=5
     delay(250);
  }
  reading2=digitalRead(button2);
  if(reading2==1&&i>=0)  
  {
    analogWrite(led,i);
    i-=5
      delay(250) 
  }
}
  
                       
                       
                       
                       
                       
                       
                       
                       
                    