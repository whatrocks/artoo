const int LED = 13;
int val = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  val = analogRead(0);
  Serial.write(val);
  Serial.write("\n");
//  digitalWrite(LED, HIGH);
//  delay(val);
//  digitalWrite(LED, LOW);
//  delay(val);
  analogWrite(LED, val/4);
  delay(10);
}
