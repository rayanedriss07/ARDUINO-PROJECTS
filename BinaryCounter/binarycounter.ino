int pin1 = 13;
int pin2 = 12;
int pin3 = 8;
int pin4 = 7;
int waittime = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pin1,LOW);  
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
    delay(waittime);
  
  digitalWrite(pin1,LOW);  
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
    delay(waittime); 
  
  digitalWrite(pin1,LOW);  
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
    delay(waittime);
  
  digitalWrite(pin1,LOW);  
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
    delay(waittime);
  
  digitalWrite(pin1,LOW); 
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
    delay(waittime);
  
  digitalWrite(pin1,LOW);  
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
    delay(waittime);
  
  digitalWrite(pin1,LOW);  
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
    delay(waittime);

  digitalWrite(pin1,LOW);  
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
    delay(waittime);
  
  digitalWrite(pin1,HIGH);  
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
    delay(waittime);
  
  digitalWrite(pin1,HIGH); 
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
    delay(waittime);
  
  digitalWrite(pin1,HIGH);  
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
    delay(waittime);

  digitalWrite(pin1,HIGH);  
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
    delay(waittime);

  digitalWrite(pin1,HIGH);  
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
    delay(waittime);

  digitalWrite(pin1,HIGH);  
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
    delay(waittime);

  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
    delay(waittime);

  digitalWrite(pin1,HIGH);  
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
    delay(waittime);

}
  
