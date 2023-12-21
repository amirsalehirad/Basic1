void setup() { // initialize digital pin 13 as an output
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(7, OUTPUT);
}

  byte red=13;
  byte green=7;
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red, HIGH); // turn the LED on (HIGH is the voltage level)
  digitalWrite(green, LOW); // turn the LED off by making the voltage LOW
  delay(1000); // wait for a second
  digitalWrite(green, HIGH); // turn the LED on (HIGH is the voltage level)
  digitalWrite(red, LOW); // turn the LED off by making the voltage LOW
  delay(1000); // wait for a second
}
