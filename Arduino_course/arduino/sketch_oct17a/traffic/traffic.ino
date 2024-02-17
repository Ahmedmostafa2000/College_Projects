void setup() {
  pinMode(2,OUTPUT); //identifing the pin 
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop() {
  digitalWrite(2,HIGH);//on green
  delay(30000);//the on green time
  digitalWrite(2,LOW);//off green
  digitalWrite(3,HIGH);//on yellow
  delay(30000);//the on yellow time
  digitalWrite(3,LOW);//off green
  digitalWrite(4,HIGH);//on red
  delay(30000);//the on red time
  digitalWrite(4,LOW);//off red

}
