/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/
  // trafic light 1
    #define orangePin 19
    #define redPin 5
    #define greenPin 4

  // trafic light 2
    #define orangePin2 17
    #define redPin2 2
    #define greenPin2 21


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  //TRAFFIC LIGHT 1
    pinMode(orangePin, OUTPUT);
    pinMode(redPin,OUTPUT);
    pinMode(greenPin,OUTPUT);

  //TRAFFIC LIGHT 2
    pinMode(orangePin2, OUTPUT);
    pinMode(redPin2,OUTPUT);
    pinMode(greenPin2,OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  //TRAFFIC LIGHT 1
      //turn green light on
      digitalWrite(redPin2, HIGH);   // turn the LED off by making the voltage LOW
      digitalWrite(orangePin, LOW);  // turn the LED on (HIGH is the voltage level)
      digitalWrite(redPin, LOW);   // turn the LED off by making the voltage LOW
      digitalWrite(greenPin, HIGH);   // turn the LED off by making the voltage LOW
      delay(5000);                    // wait for a second

      //flash
      digitalWrite(greenPin, LOW);  // turn the LED on (HIGH is the voltage level)
      delay(250);   
      digitalWrite(greenPin, HIGH);  // turn the LED on (HIGH is the voltage level)
      delay(500); 
      digitalWrite(greenPin, LOW);  // turn the LED on (HIGH is the voltage level)
      delay(250);   
      digitalWrite(greenPin, HIGH);  // turn the LED on (HIGH is the voltage level)
      delay(500); 
      digitalWrite(greenPin, LOW);  // turn the LED on (HIGH is the voltage level)
      delay(250);   
      digitalWrite(greenPin, HIGH);  // turn the LED on (HIGH is the voltage level)
      delay(500); 


      //orange on
      digitalWrite(orangePin, HIGH);  // turn the LED on (HIGH is the voltage level)
      digitalWrite(redPin, LOW);   // turn the LED off by making the voltage LOW
      digitalWrite(greenPin, LOW);   // turn the LED off by making the voltage LOW
      delay(5000);   

      //flash
      digitalWrite(orangePin, LOW);  // turn the LED on (HIGH is the voltage level)
      delay(250);   
      digitalWrite(orangePin, HIGH);  // turn the LED on (HIGH is the voltage level)
      delay(500); 
      digitalWrite(orangePin, LOW);  // turn the LED on (HIGH is the voltage level)
      delay(250);   
      digitalWrite(orangePin, HIGH);  // turn the LED on (HIGH is the voltage level)
      delay(500);    
      digitalWrite(orangePin, LOW);  // turn the LED on (HIGH is the voltage level)
      delay(250);   
      digitalWrite(orangePin, HIGH);  // turn the LED on (HIGH is the voltage level)
      delay(500); 

      //red light on
      digitalWrite(orangePin, LOW);  // turn the LED on (HIGH is the voltage level)
      digitalWrite(redPin, HIGH);   // turn the LED off by making the voltage LOW
      digitalWrite(greenPin, LOW);   // turn the LED off by making the voltage LOW
      delay(3000);  

    //TRAFFIC LIGHT 2

        //turn green light on
      digitalWrite(orangePin2, LOW);  // turn the LED on (HIGH is the voltage level)
      digitalWrite(redPin2, LOW);   // turn the LED off by making the voltage LOW
      digitalWrite(greenPin2, HIGH);   // turn the LED off by making the voltage LOW
      delay(5000);                    // wait for a second

      //flash
      digitalWrite(greenPin2, LOW);  // turn the LED on (HIGH is the voltage level)
      delay(250);   
      digitalWrite(greenPin2, HIGH);  // turn the LED on (HIGH is the voltage level)
      delay(500); 
      digitalWrite(greenPin2, LOW);  // turn the LED on (HIGH is the voltage level)
      delay(250);   
      digitalWrite(greenPin2, HIGH);  // turn the LED on (HIGH is the voltage level)
      delay(500); 
      digitalWrite(greenPin2, LOW);  // turn the LED on (HIGH is the voltage level)
      delay(250);   
      digitalWrite(greenPin2, HIGH);  // turn the LED on (HIGH is the voltage level)
      delay(500); 

      //orange on
      digitalWrite(orangePin2, HIGH);  // turn the LED on (HIGH is the voltage level)
      digitalWrite(redPin2, LOW);   // turn the LED off by making the voltage LOW
      digitalWrite(greenPin2, LOW);   // turn the LED off by making the voltage LOW
      delay(5000);   

      //flash
      digitalWrite(orangePin2, LOW);  // turn the LED on (HIGH is the voltage level)
      delay(250);   
      digitalWrite(orangePin2, HIGH);  // turn the LED on (HIGH is the voltage level)
      delay(500); 
      digitalWrite(orangePin2, LOW);  // turn the LED on (HIGH is the voltage level)
      delay(250);   
      digitalWrite(orangePin2, HIGH);  // turn the LED on (HIGH is the voltage level)
      delay(500);   
      digitalWrite(orangePin2, LOW);  // turn the LED on (HIGH is the voltage level)
      delay(250);   
      digitalWrite(orangePin2, HIGH);  // turn the LED on (HIGH is the voltage level)
      delay(500); 

      //red light on
      digitalWrite(orangePin2, LOW);  // turn the LED on (HIGH is the voltage level)
      digitalWrite(redPin2, HIGH);   // turn the LED off by making the voltage LOW
      digitalWrite(greenPin2, LOW);   // turn the LED off by making the voltage LOW
      delay(3000);  

 
}