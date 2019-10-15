void setup() {
 
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite( 2, HIGH);  
  delay(1000);                      
 
  digitalWrite(2 , LOW);   
  delay(1000);                       
}

