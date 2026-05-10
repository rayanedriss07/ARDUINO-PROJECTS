int VoltagePin = A0;
int LEDpin = 3;
float VoltageValue;
float LEDVoltage;



void setup() {
  // put your setup code here, to run once:
  pinMode(VoltagePin,INPUT);
  pinMode(LEDpin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  VoltageValue = (5./1023.)*(analogRead(VoltagePin));
  Serial.println(VoltageValue);

  LEDVoltage = (255./5.)*(VoltageValue);

  analogWrite(LEDpin,LEDVoltage);

}
