const unsigned int LED_BIT0 = 12;
const unsigned int LED_BIT1 = 11;
const unsigned int LED_BIT2 = 10;
const unsigned int LED_BIT3 = 9;

long result = 0;

void setup() {
  pinMode(LED_BIT0, OUTPUT);
  pinMode(LED_BIT1, OUTPUT);
  pinMode(LED_BIT2, OUTPUT);
  pinMode(LED_BIT3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  result++;
  if (result == 16) {
    result = 0;
  }
  output_result(result);
  delay(500);
}

void output_result(const long result) {
  digitalWrite(LED_BIT0, result & B0001);
  digitalWrite(LED_BIT1, result & B0010);
  digitalWrite(LED_BIT2, result & B0100);
  digitalWrite(LED_BIT3, result & B1000);
}
