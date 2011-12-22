#include <Servo.h>

Servo servo;

void setup(){
  servo.attach(0);
}

void loop(){
  for (int angle = 0 ; angle <= 179 ; angle++){
    servo.write(angle);
    delay(20);
  }
}

