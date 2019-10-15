void setup(){ 
pinMode(3, OUTPUT);
}
void loop() {
 analogWrite(3 , 200);
 delay(100);
 analogWrite(3, 10);
 delay(100);
 analogWrite(3, 50);
 delay(100);
 analogWrite(3,10);
 delay(100);
 analogWrite(3,170);
 
 delay(100);
  analogWrite(3,255);
 delay(100);
}
