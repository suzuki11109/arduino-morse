/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 12;
int switches = 0;
char str[20] = "THIS IS A BOOK";

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);  
  pinMode(switches, INPUT);
  digitalWrite(switches, HIGH);  
}

// the loop routine runs over and over again forever:
void loop() {
  
  for (int i=0; i< strlen(str); i++) {
    get_morse(str[i]);
    end();
  }
  end();
  end();
  
//  if (!digitalRead(switches)) {
//    digitalWrite(led, HIGH);
//  } else {
//    digitalWrite(led, LOW);
//  }
  
}

void get_morse(char ch) {
  switch(ch) {
    case 'A':
      dt();ds();
      break;
    case 'B':
      ds();dt();dt();dt();
      break;
    case 'C':
      ds();dt();ds();dt();
      break;
    case 'D':
      ds();dt();dt();
      break; 
    case 'E':
      dt();
      break;
    case 'F': 
      dt();dt();ds();dt();
      break;
    case 'G':
      ds();ds();dt();
      break;
    case 'H':
      dt();dt();dt();dt();
      break;
    case 'I':
      dt();dt();
      break;
    case 'J':
      dt();ds();ds();ds();
      break;
    case 'K':
      ds();dt();ds();
      break;
    case 'L':
      dt();ds();dt();dt();
      break;
    case 'M':
      ds();ds();
      break;
    case 'N':
      ds();dt();
      break;
    case 'O':
      ds();ds();ds();
      break;
    case 'P': 
      dt();ds();ds();dt();
      break;
    case 'Q':
      ds();ds();dt();ds();
      break;
    case 'R':
      dt();ds();dt();
      break;
    case 'S':
      dt();dt();dt();
      break;
    case 'T':
      ds();
      break;
    case 'U':
      dt();dt();ds();
      break;
    case 'V':
      dt();dt();dt();ds();
      break;
    case 'W':
      dt();ds();ds();
      break;
    case 'X':
      ds();dt();dt();ds();
      break;
    case 'Y':
      ds();dt();ds();ds();
      break;
    case 'Z':
      ds();ds();dt();dt();
      break;
      
    default: 
      break;
  }
}

void dt() { //dot
   digitalWrite(led, HIGH);
   delay(100);
   digitalWrite(led, LOW);    
   delay(100); 
}

void ds() { //dash
   digitalWrite(led, HIGH);
   delay(300);
   digitalWrite(led, LOW);    
   delay(100); 
}

void end() {
  digitalWrite(led, LOW);
  delay(300);
}
