void setup() {
Serial.begin(9600);  //통신속도 조절
}
void loop() {
if(Serial.available()){
long value = Serial.parseInt();   
Serial.println(value);  
}  
}
