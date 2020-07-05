void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

int i = 3;
int j = 8;

void loop() {
  
  digitalWrite(i, HIGH);
  digitalWrite(j, HIGH);
  int k = i + 1;
  while(k <= 8) {
    if (k == j) {
      digitalWrite(k, HIGH);
      k++;
    } else {
      digitalWrite(k, LOW);
      k++;
    }
  }
  k = i - 1;
  while(k >= 3) {
    if (k == j) {
      digitalWrite(k, HIGH);
      k--;
    } else {
      digitalWrite(k, LOW);
      k--;
    }
  }
  delay(120);
  i++;
  j--;
  if(i > 8 || j < 3) {
    i=3;
    j=8;
  }
}
