      //2
      //Name: Maliha Nawar; ID: 17.01.05.131
void setup() {DDRD=0b00001100;DDRB=0b00000001;}//initializing 8,3,2 pins as output for A,B,C leds
void loop() {
digitalWrite(8,HIGH);//A is on
digitalWrite(3,HIGH);delay(416);digitalWrite(3,LOW);delay(416);
digitalWrite(3,HIGH);delay(416);digitalWrite(3,LOW);delay(416);//B blinks twice within 5s
digitalWrite(2,HIGH);delay(277);digitalWrite(2,LOW);delay(277);
digitalWrite(2,HIGH);delay(277);digitalWrite(2,LOW);delay(277);
digitalWrite(2,HIGH);delay(277);digitalWrite(2,LOW);delay(277);//C blinks thrice within 5s
delay(1766);//in total A is on for 5s

digitalWrite(8,LOW);//A is off
digitalWrite(3,HIGH);delay(277);digitalWrite(3,LOW);delay(277);
digitalWrite(3,HIGH);delay(277);digitalWrite(3,LOW);delay(277);
digitalWrite(3,HIGH);delay(277);digitalWrite(3,LOW);delay(277);//B blinks thrice within 5s
digitalWrite(2,HIGH);delay(416);digitalWrite(2,LOW);delay(416);
digitalWrite(2,HIGH);delay(416);digitalWrite(2,LOW);delay(416);//C blinks twice within 5s
delay(1766);}//in total A is off for 5s
