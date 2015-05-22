const int speakerPin = 9;
int tempo = 300;

int length = 50; 
char notes[] = "eeeeeeegcdefffffeeeeddedgeeeeeeegcdefffffeeeggfdc";
int beats[] = {1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 1, 2, 1, 1, 2, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4 };


void setup() {

  pinMode(speakerPin, OUTPUT);
}

void loop() 

{
    for (int i = 0; i < length; i++) {
    if (notes[i] == ' ') {
      delay(beats[i] * tempo);
    } else {
      playNote(notes[i], beats[i] * tempo);
    }
    
    delay(tempo / 2); 
  }
}
