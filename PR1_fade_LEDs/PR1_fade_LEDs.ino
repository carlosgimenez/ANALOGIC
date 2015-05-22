
const int led0 = 3;       
const int led1 = 5;        
const int led2 = 6;          
const int led3 = 9;          
const int led4 = 10;       
const int led5 = 11;      
int velocitat = 1000;       


void setup()
{
  pinMode(led0, OUTPUT);    
  pinMode(led1, OUTPUT);    
  pinMode(led2, OUTPUT);     
  pinMode(led3, OUTPUT); 
  pinMode(led4, OUTPUT);     
  pinMode(led5, OUTPUT);     
}


void loop()
{
  analogWrite(led0, 60);     
  analogWrite(led1, 60);    
  analogWrite(led2, 60);    
  analogWrite(led3, 60);     
  analogWrite(led4, 60);    
  analogWrite(led5, 60);     
  
  delay(velocitat);          
  
  analogWrite(led0, 125);    
  analogWrite(led1, 125);    
  analogWrite(led2, 125);    
  analogWrite(led3, 125);    
  analogWrite(led4, 125);   
  analogWrite(led5, 125);  
  
  delay(velocitat);          
  
  analogWrite(led0, 255);    
  analogWrite(led1, 255);    
  analogWrite(led2, 255);   
  analogWrite(led3, 255);    
  analogWrite(led4, 255);    
  analogWrite(led5, 255);    
   
  delay(velocitat);           
  
  analogWrite(led0, 125);   
  analogWrite(led1, 125);   
  analogWrite(led2, 125);    
  analogWrite(led3, 125);    
  analogWrite(led4, 125);   
  analogWrite(led5, 125);    
  
  delay(velocitat);          
}


