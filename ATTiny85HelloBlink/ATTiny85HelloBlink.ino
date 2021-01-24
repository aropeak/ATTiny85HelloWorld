int LED = 1;
int timer = 500;


void setup() {
  // put your setup code here, to run once:

  pinMode(LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(LED, HIGH);
  delay(timer);
  digitalWrite(LED, LOW);
  delay(timer);

}
