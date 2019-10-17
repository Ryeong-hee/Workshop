#include <Wire.h>
void setup() {
  Wire. begin();
}
void loop() {
  int value = analogRead(A0) * (255.0 / 1023.0);
  Wire. beginTransmission(5);
  Wire.write(value);
  Wire.endTransmission();
}
