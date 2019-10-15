int buttonPin = 2;     
const int ledPin =  13;      
int buttonState = 0;         
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP); //pullup ; digital in -> button -> ground
}                                 
void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState ==LOW) {  //버튼 누르면 ground로 (=low) low일 때 HIGH
    digitalWrite(ledPin,HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
