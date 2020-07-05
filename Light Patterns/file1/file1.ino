void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);

}

void loop() {
  int i = 3;
  while (i <= 8) {
    digitalWrite(i, HIGH);
    int f = i-1;
    while(f >=3) {
      digitalWrite(f, LOW);
      f--;
    }
    f=i+1;
    while (f <= 8) {
      digitalWrite(f, LOW);
      f++;
    }
    delay(250);
    i++;
  }
  i = 8;
  while (i >= 3) {
    digitalWrite(i, HIGH);
    int f = i-1;
    while(f >=3) {
      digitalWrite(f, LOW);
      f--;
    }
    f=i+1;
    while (f <= 8) {
      digitalWrite(f, LOW);
      f++;
    }
    delay(250);
    i--;
  }

}
