///Written by Kamaron Bickham
#include <Arduino.h>



const int pin_num_1=7; //relay 1 pin
const int pin_num_2=8; //relay 2 pin
const int trigPin = 13; //sound sensor trig pin
const int echoPin = 12; //sound sensor echo pin
int position=0; //for drawer location: 1 for open 0 for closed
int counter; //keep track of time
long duration;
int distance;


void setup(){
pinMode(pin_num_1,OUTPUT);
pinMode(pin_num_2,OUTPUT);
 pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
 pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600);


}
void move(){
   if(position==0){
      digitalWrite(pin_num_1,HIGH);
    digitalWrite(pin_num_2, LOW);
    position=1;
    delay(8000);

   }
   else if(position==1){
      digitalWrite(pin_num_1,LOW);
    digitalWrite(pin_num_2, LOW);
    position=0;
     delay(8000);

   }
}

void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration/74 / 2;

while(distance <=4 && distance >= 1)
{
  if(counter == 5)
  { move();
    counter = 0;
    Serial.println("moving");
    break;
  }
  else{

   counter+=1;
   delay(100);
  }

}


Serial.print("Distance: ");


Serial.println(distance);
}
