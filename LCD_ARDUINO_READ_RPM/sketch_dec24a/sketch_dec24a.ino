#include <LiquidCrystal.h>
#include <stdlib.h>
#include <string.h>

#define ena 7
#define in1 6
#define in2 5

int x = 0;
int ticks = 0;
int wheelspeed = 0;
char buffer[100];
LiquidCrystal lcd(13,12,11,10,9,8);
void setup () {
lcd.begin(16,2);
lcd.setCursor(1,0);
lcd.print("Speed:    RPM");
Serial.begin(9600);
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
attachInterrupt(digitalPinToInterrupt(2),tick,FALLING);

}
void tick(){
ticks++;
}
void loop() {
 

digitalWrite(ena, HIGH);
analogWrite(in1,255);
digitalWrite(in2, LOW);
delay(1000);
lcd.setCursor(7,0);
Serial.println(wheelspeed);

lcd.print(wheelspeed,DEC);

wheelspeed = (ticks) *(60/24);
ticks = 0;
if(Serial.available()){
x = 0;
while(Serial.available()){
x = x*10 + Serial.read() - '0';

}

}

}
