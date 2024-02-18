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
  while(Serial.available()==0);
  int val = Serial.read();
  reset();
  if (val != 10) {
      switch (val) {
        case 'a':
        case 'A':
          digitalWrite(2,HIGH);
          break;
        case 'b':
          digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          break;
        case 'B':
          digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          break;
        case 'c':
          digitalWrite(2,HIGH);
          digitalWrite(5,HIGH);
          break;
        case 'C':
          digitalWrite(2,HIGH);
          digitalWrite(5,HIGH);
          break;
        case 'd':
          digitalWrite(2,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 'D':
          digitalWrite(2,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 'e':
          digitalWrite(2,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 'E':
          digitalWrite(2,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 'f':
          digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          digitalWrite(5,HIGH);
          break;
        case 'F':
          digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          digitalWrite(5,HIGH);
          break;
        case 'g':
          digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 'G':
          digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 'h':
          digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 'H':
          digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 'i':
          digitalWrite(3,HIGH);
          digitalWrite(5,HIGH);
          break;
        case 'I':
          digitalWrite(3,HIGH);
          digitalWrite(5,HIGH);
          break;
        case 'j':
          digitalWrite(3,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 'J':
          digitalWrite(3,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 'k':
          digitalWrite(2,HIGH);
          digitalWrite(4,HIGH);
          break;
        case 'K':
          digitalWrite(2,HIGH);
          digitalWrite(4,HIGH);
          break;
        case 'l':
          digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          break;
        case 'L':
          digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          break;
        case 'm':
          digitalWrite(2,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          break;
        case 'M':
          digitalWrite(2,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          break;
        case 'n':
          digitalWrite(2,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 'N':
          digitalWrite(2,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 'o':
          digitalWrite(2,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 'O':
          digitalWrite(2,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 'p':
            digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          break;
        case 'P':
          digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          break;
        case 'q':
          digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 'Q':
          digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 'r':
          digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 'R':
          digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 's':
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          break;
        case 'S':
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          break;
        case 't':
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 'T':
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          break;
        case 'u':
          digitalWrite(2,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'U':
          digitalWrite(2,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'v':
          digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'V':
          digitalWrite(2,HIGH);
          digitalWrite(3,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'w':
          digitalWrite(3,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'W':
          digitalWrite(3,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'x':
          digitalWrite(2,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'X':
          digitalWrite(2,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'y':
          digitalWrite(2,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'Y':
          digitalWrite(2,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(5,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'z':
          digitalWrite(2,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case 'Z':
          digitalWrite(2,HIGH);
          digitalWrite(4,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
          break;
        case '.':
          digitalWrite(3,HIGH);
          digitalWrite(6,HIGH);
          digitalWrite(7,HIGH);
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
  