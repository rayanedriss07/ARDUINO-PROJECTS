float PotV;
int V = A5;
int delayT;
int BuzzPin = 8;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(BuzzPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   delayT = (9940./1023.)*(analogRead(V)) + 60.;
   Serial.println(delayT);

  digitalWrite(BuzzPin,HIGH);
  delayMicroseconds(delayT);
  digitalWrite(BuzzPin,LOW);
  delayMicroseconds(delayT);



  



}
