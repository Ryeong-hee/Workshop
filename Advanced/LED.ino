
void setup() {
 Serial.begin(9600);  
pinMode(3,OUTPUT);
}
void loop() {
  int sensorValue = analogRead(A0);
  float value = sensorValue * (255.0 / 1023.0);
  Serial.println(value);
  analogWrite(3, value);
}
