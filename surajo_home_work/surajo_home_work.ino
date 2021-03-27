
int trigger = 6;
int echo = 7;
long Time = 0;
long  distance = 0;
int G1 = 13;
int G2 = 12;//
int G3 = 11;//
int R4 = 10;//
int R5 = 9;//
int Abstand = 90;


void setup()
{
  Serial.begin(9600);
  pinMode(trigger,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(G1,OUTPUT);
  pinMode(G2,OUTPUT);
  pinMode(G3,OUTPUT);
  pinMode(R4,OUTPUT);
  pinMode(R5,OUTPUT);
}

void loop() 
{
  digitalWrite(trigger,LOW);
  delay(5);
  digitalWrite(trigger,HIGH);
  delay(10);
  digitalWrite(trigger,LOW);
  Time = pulseIn(echo,HIGH);
  distance = (Time/2)*0.03432;//

  if(distance>=500|| distance<=0)
  {Serial.println("Kein Messwert");}
  else
  {Serial.println(distance);
  Serial.println("cm");}

  delay(50);

  if (distance<=Abstand)
  {digitalWrite(G1,HIGH);
  }

  else
  {
  digitalWrite(G1,LOW);
  }
  

  if(distance<=Abstand-50)
  {digitalWrite(G2,HIGH);}

  else
  {digitalWrite(G2,LOW);}
  

  if(distance<=Abstand-60)
  {digitalWrite(G3,HIGH);}

  else
  {digitalWrite(G3,LOW);}

  if(distance<=Abstand-70)
  {digitalWrite(R4,HIGH);}

  else
  {digitalWrite(R4,LOW);}

  if(distance<=Abstand-80)
  {digitalWrite(R5,HIGH);}

  else
  {digitalWrite(R5,LOW);
  
  
  
  
  }

  delay(5);
  
  // put your main code here, to run repeatedly:
}
