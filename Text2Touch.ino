void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(3, HIGH);
  while(Serial.available()==0);
  int val = Serial.read();
  reset();
  if (val != 10) {
      switch (val) {
        case 'a':
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'A':
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'b':
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'B':
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'c':
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'C':
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'd':
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'D':
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'e':
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'E':
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'f':
          digitalWrite(4,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'F':
          digitalWrite(4,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'g':
          digitalWrite(4,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'G':
          digitalWrite(4,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'h':
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'H':
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'i':
          digitalWrite(2,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'I':
          digitalWrite(2,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'j':
          digitalWrite(2,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'J':
          digitalWrite(2,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'k':
          digitalWrite(3,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'K':
          digitalWrite(3,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'l':
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'L':
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'm':
          digitalWrite(3,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'M':
          digitalWrite(3,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'n':
          digitalWrite(3,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'N':
          digitalWrite(3,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'o':
          digitalWrite(3,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'O':
          digitalWrite(3,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'p':
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'P':
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'q':
          digitalWrite(7,HIGH);
          break;
        case 'Q':
          digitalWrite(7,HIGH);
          break;
        case 'r':
          digitalWrite(5,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'R':
          digitalWrite(5,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 's':
          digitalWrite(2,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'S':
          digitalWrite(2,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 't':
          digitalWrite(2,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'T':
          digitalWrite(2,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'u':
          digitalWrite(3,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 'U':
          digitalWrite(3,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 'v':
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 'V':
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 'w':
          digitalWrite(2,HIGH);
          digitalWrite(4,HIGH);
          break;
        case 'W':
          digitalWrite(2,HIGH);
          digitalWrite(4,HIGH);
          break;
        case 'x':
          digitalWrite(3,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 'X':
          digitalWrite(3,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 'y':
          digitalWrite(3,HIGH);
          break;
        case 'Y':
          digitalWrite(3,HIGH);
          break;
        case 'z':
          digitalWrite(3,HIGH);
          digitalWrite(5,HIGH);
          break;
        case 'Z':
          digitalWrite(3,HIGH);
          digitalWrite(5,HIGH);
          break;
        case '.':
          digitalWrite(2,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          break;
        case ',':
          digitalWrite(3,HIGH);
          break;
        case '!':
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(6,HIGH);
          break;
        case '?':
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(7,HIGH);
          break;
      }
      delay(3000);
  }
  
}

  void reset() {
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(2,LOW);
  }
  