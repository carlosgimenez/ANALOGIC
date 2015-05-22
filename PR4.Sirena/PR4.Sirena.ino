const int speaker = 9;


 void setup ()
 {
  pinMode(speaker, OUTPUT);
  
 }


 void loop () 
 {
tone (speaker, 100);
delay (500);

noTone (speaker);
delay (5000);
 
}
