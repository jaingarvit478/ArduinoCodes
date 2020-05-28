  /*
  This code was written by Garvit Jain.
  To report any discrepencies/edits email to : 
  Circuit diagram is available at :
  This is a FOSS and under a GNU license.
  */
  
  const int buttonPin = 2;     // the pin number of the pushbutton  this is where push button will be connected
  const int bpin=3;            // the BLUE led is connected to pin 3
  const int gpin=4;            // the GREEN led is connected to pin 4
  const int rpin=5;            // the RED led is connected to pin 5
  int buttonState = 0;         //buttonState is zero at the beginning
  int count=0;                 //count is zero at the start of the program
  
void setup() {
  pinMode(buttonPin,INPUT);  //setting the buttonPin as INPUT
  pinMode(bpin,OUTPUT);      // setting the BLUE pin as OUTPUT
  pinMode(rpin,OUTPUT);      // setting the RED pin as OUTPUT
  pinMode(gpin,OUTPUT);      // setting the GREEN pin as OUTPUT
  pinMode(LED_BUILTIN,OUTPUT); // setting the LED_BUILTIN pin as OUTPUT, this is pin 13 on ARDUINO uno
  Serial.begin(9600);         //setting up serial communication BITrate
}

void loop() {
  buttonState=digitalRead(buttonPin);  //reading the button state and storing it to the variable buttonState
  
     if (buttonState==HIGH){        
        count = count+1;               //this line increase count by 1 everytime the button is pressed
        delay(500);                    // delay is set to allow for time between button presses
    if (count==4){                    //this line of code resets the count to 0 everytime it reaches 4
      count =0;
      //return count;
      }
      Serial.println(count);            //prints the count of button presses on the serial monitior ( press Ctrl+Shift+M to open)
    }
    if(count==0){                        //condition 1 , only the onboard LED(pin 13 by default) will be ON
      digitalWrite(gpin,LOW);
      digitalWrite(bpin,LOW);
      digitalWrite(rpin,LOW);
      digitalWrite(LED_BUILTIN,HIGH);
    }
    
    if(count==1){                        //condition 2 ,  only the GREEN LED connected to PIN 3 will be ON
      digitalWrite(gpin,HIGH);
      digitalWrite(bpin,LOW);
      digitalWrite(rpin,LOW);
      digitalWrite(LED_BUILTIN,LOW);

    }else if(count==2){                  //condition 3 ,  only the BLUE LED connected to PIN4 will be ON
      digitalWrite(gpin,LOW);
      digitalWrite(bpin,HIGH);
      digitalWrite(rpin,LOW);
      digitalWrite(LED_BUILTIN,LOW);

      }
      else  if(count==3){                //condition 4 ,  only the RED LED connected to PIN 5 will be ON
      digitalWrite(gpin,LOW);
      digitalWrite(bpin,LOW);
      digitalWrite(rpin,HIGH);
      digitalWrite(LED_BUILTIN,LOW);

}
     
}
