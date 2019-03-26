const int LED = 13; // the pin for the LED
const int BUTTON = 7; // the input pin

int val = 0; // val will store the state of the input pin

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  val = digitalRead(BUTTON); // read input value and store it
  Serial.print(val);
  Serial.print("\n");
  if (val == HIGH){
    Serial.print("HI!");
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}
