int LED = 1;
int timer = 100;

int butPin = 0;
int butVal;

int switchVal = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(LED, OUTPUT);
  pinMode(butPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  butVal = digitalRead(butPin);

  checkState(butVal);
  switch (switchVal) {
    case 0:
      digitalWrite(LED, LOW);
      break;

    case 1:
      digitalWrite(LED, HIGH);
      break;
    case 2:
      digitalWrite(LED, LOW);
      delay(timer);
      digitalWrite(LED, HIGH);
      delay(timer);
      break;
  }

}

//if button is pressed then switchVal goes up by 1
int checkState (int  aVal) {
  if (aVal == true) {
    switchVal = switchVal + 1;
    if (switchVal >= 3) {
      switchVal = 0;
    }
    delay(200);
  }
}
