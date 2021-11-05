

String message="robu best";
int unit = 500;

void setup() {
  // put your setup code here, to run once:
    pinMode(LED_BUILTIN, OUTPUT);
    delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  char c;
  message.toLowerCase();
  for(int i=0;i<message.length();i++){
    c = message.charAt(i);
    resolveMorse(c);
    delay(3*unit);
  }

  delay(10000);

}

void dot(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(unit);
  digitalWrite(LED_BUILTIN, LOW);
  delay(unit);
}

void dash(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(3*unit);
  digitalWrite(LED_BUILTIN, LOW);
  delay(unit);
}

void resolveMorse(char c){
  switch(c){
    case 'a':
      morse_A();
      break;
    case 'b':
      morse_B();
      break;
    case 'c':
      morse_C();
      break;
    case 'd':
      morse_D();
      break;
    case 'e':
      morse_E();
      break;
    case 'f':
      morse_F();
      break;
    case 'g':
      morse_G();
      break;
    case 'h':
      morse_H();
      break;
    case 'i':
      morse_I();
      break;
    case 'j':
      morse_J();
      break;
    case 'k':
      morse_K();
      break;
    case 'l':
      morse_L();
      break;
    case 'm':
      morse_M();
      break;
    case 'n':
      morse_N();
      break;
    case 'o':
      morse_O();
      break;
    case 'p':
      morse_P();
      break;
    case 'q':
      morse_Q();
      break;
    case 'r':
      morse_R();
      break;
    case 's':
      morse_S();
      break;
    case 't':
      morse_T();
      break;
    case 'u':
      morse_U();
      break;
    case 'v':
      morse_V();
      break;
    case 'w':
      morse_W();
      break;
    case 'x':
      morse_X();
      break;
    case 'y':
      morse_Y();
      break;
    case 'z':
      morse_Z();
      break;
    default:
      delay(7*unit);
      break;
    
  }
  
}

void morse_A(){
  dot();
  dash();
}
void morse_B(){
  dash();
  dot();
  dot();
  dot();
}
void morse_C(){
  dash();
  dot();
  dash();
  dot();
}
void morse_D(){
  dash();
  dot();
  dot();
}
void morse_E(){
  dot();
}
void morse_F(){
  dot();
  dot();
  dash();
  dot();
}
void morse_G(){
  dash();
  dash();
  dot();
}
void morse_H(){
  dot();
  dot();
  dot();
  dot();
}
void morse_I(){
  dot();
  dot();
}
void morse_J(){
  dot();
  dash();
  dash();
  dash();
}
void morse_K(){
  dash();
  dot();
  dash();
}
void morse_L(){
  dot();
  dash();
  dot();
  dot();
}
void morse_M(){
  dash();
  dash();
}
void morse_N(){
  dash();
  dot();
}
void morse_O(){
  dash();
  dash();
  dash();
}
void morse_P(){
  dot();
  dash();
  dash();
  dot();
}
void morse_Q(){
  dash();
  dash();
  dot();
  dash();
}
void morse_R(){
  dot();
  dash();
  dot();
}
void morse_S(){
  dot();
  dot();
  dot();
}
void morse_T(){
  dash();
}
void morse_U(){
  dot();
  dot();
  dash();
}
void morse_V(){
  dot();
  dot();
  dot();
  dash();
}
void morse_W(){
  dot();
  dash();
  dash();
}
void morse_X(){
  dash();
  dot();
  dot();
  dash();
}
void morse_Y(){
  dash();
  dot();
  dash();
  dash();
}
void morse_Z(){
  dash();
  dash();
  dot();
  dot();
  
}
