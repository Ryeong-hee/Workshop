void setup() {
  Serial.begin(9600);  //통신속도 조절
  pinMode(3, OUTPUT);
}
void loop() {
  if (Serial.available()) {
    long value = Serial.parseInt();
    Serial.println(value);
  
  analogWrite(3, value);
  delay(1000);}
}
