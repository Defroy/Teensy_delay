// Teensy 2.0 has the LED on pin 11
// Teensy++ 2.0 has the LED on pin 6
// Teensy 3.0 has the LED on pin 13
const int ledPin = 11;

void setup() {
  pinMode(ledPin, OUTPUT);
  void startupdelay();
}
void loop() { 
}

void startupdelay() {
  digitalWrite(ledPin, HIGH);
  delay(6000);
  digitalWrite(ledPin, LOW);
  for (int i=10; i == 0; i-1){ 
    digitalWrite(ledPin, HIGH);
    delay(i*10); 
    digitalWrite(ledPin, LOW);
    delay(i*10);
  }
}

