

void setup() {
  // initialize the LED pin as an output:
  pinMode(4, OUTPUT); //Red LED
  pinMode(6, OUTPUT); //Green LED

  // initialize the pushbutton pin as an input:
  pinMode(A1, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  int buttonState = digitalRead(A1);

  // check if the pushbutton is pressed:
  if (buttonState == HIGH) {
    digitalWrite(4, HIGH); //turn Red LED on
    digitalWrite(6, LOW); //turn Green LED off

  } else {
    digitalWrite(4, LOW); //turn Red LED off
    digitalWrite(6, HIGH); //turn Green LED on
  }
}
