//COKLAT --> GND
//MERAH --> vCC
//ORANGE --> DATA
//PIN DI nodeMCU pkakai GPIO
#include <Servo.h>

Servo servo;

void setup() {

    servo.attach(5); //D1
    servo.write(0);

    delay(2000);

}

void loop() {

    servo.write(180);

    delay(1000);

    servo.write(0);

    delay(1000);

}
 /*
 // scan from 0 to 180 degrees
  for(angle = 0; angle < 180; angle++)  
  {                                  
    servo.write(angle);               
    delay(30);                   
  } 
  // now scan back from 180 to 0 degrees
  for(angle = 180; angle > 10; angle--)    
  {                                
    servo.write(angle);           
    delay(30);       
  }
  */ 
  
