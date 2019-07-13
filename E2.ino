char val;
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = Serial.read();
  if (val == 'a') {
    digitalWrite(13, HIGH);
    delay(1000);
  }
  else if (val == 'b') {
    digitalWrite(13, LOW);
    delay(1000);
  }
  else if (val == 'c') {
    digitalWrite(12, HIGH);
    delay(1000);
  }
  else if (val == 'd') {
    digitalWrite(12, LOW);
    delay(1000);
  }
}
