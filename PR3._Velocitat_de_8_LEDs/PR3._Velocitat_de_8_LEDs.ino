int velocitat = 50;         
int valPot0;                

void setup()
{
  pinMode(6, OUTPUT);     
  pinMode(7, OUTPUT);     
  pinMode(8, OUTPUT);     
  pinMode(9, OUTPUT);    
  pinMode(10, OUTPUT);     
  pinMode(11, OUTPUT);    
  pinMode(12, OUTPUT);     
  pinMode(13, OUTPUT);     
}


void loop()
{
  
  valPot0= analogRead(00);   
  velocitat = valPot0;    
  
  digitalWrite(6, HIGH);    
  digitalWrite(7, LOW);     
  digitalWrite(8, HIGH);    
  digitalWrite(9, LOW);     
  digitalWrite(10, HIGH);    
  digitalWrite(11, LOW);    
  digitalWrite(12, HIGH);    
  digitalWrite(13, LOW);     
  
  delay(velocitat);            
  
  digitalWrite(6, LOW);     
  digitalWrite(7, HIGH);    
  digitalWrite(8, LOW);    
  digitalWrite(9, HIGH);   
  digitalWrite(10, LOW);     
  digitalWrite(11, HIGH);  
  digitalWrite(12, LOW);    
  digitalWrite(13, HIGH);
  
  delay(velocitat);         
}

