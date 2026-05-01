void setup() {
 
  pinMode(13,OUTPUT);
    

}

void loop() {
  
  digitalWrite(13,HIGH);
    delay(1000);
  digitalWrite(13,LOW);   
    delay(1000);

}
// digitalWrite = Sets a diggital pin to High (on) or Low (off)  digitalWrite(Pin, Mode)
// pinMode(pin, Mode) = sets a pin as input or output
// delay(ms): Pauses the program for a specific number of milliseconds.
// every statement must end with ;
// {} used to group code
