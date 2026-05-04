int greenled = 8;
int yellowled = 12;
int redled = 13;


void setup() {
  // 
  pinMode(redled,OUTPUT);
  pinMode(greenled,OUTPUT);
  pinMode(yellowled,OUTPUT);
}  

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(greenled,HIGH);
    delay(5000);
  digitalWrite(greenled,LOW);
  
  digitalWrite(yellowled,HIGH);
    delay(2000);
  digitalWrite(yellowled,LOW);
  
  digitalWrite(redled,HIGH);
    delay(5000);
  digitalWrite(redled,LOW);
}
