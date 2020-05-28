  const int buttonPin = 2;     // the number of the pushbutton pin
  const int bpin=3;
  const int gpin=4;
  const int rpin=5;
  int buttonState = 0; 
  int count=0;
  
void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(bpin,OUTPUT);
  pinMode(rpin,OUTPUT);
  pinMode(gpin,OUTPUT);
  pinMode(LED_BUILTIN,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  buttonState=digitalRead(buttonPin);
  
   if (buttonState==HIGH){        
        count = count+1;
        delay(200);
    if (count==4){
      count =0;
      //return count;
      }
      Serial.println(count);
    }
    if(count==0){
      digitalWrite(gpin,LOW);
      digitalWrite(bpin,LOW);
      digitalWrite(rpin,LOW);
      digitalWrite(LED_BUILTIN,HIGH);
    }
    
    if(count==1){
      digitalWrite(gpin,HIGH);
      digitalWrite(bpin,LOW);
      digitalWrite(rpin,LOW);
      digitalWrite(LED_BUILTIN,LOW);

    }else if(count==2){
      digitalWrite(gpin,LOW);
      digitalWrite(bpin,HIGH);
      digitalWrite(rpin,LOW);
      digitalWrite(LED_BUILTIN,LOW);

      }
      else  if(count==3){
      digitalWrite(gpin,LOW);
      digitalWrite(bpin,LOW);
      digitalWrite(rpin,HIGH);
      digitalWrite(LED_BUILTIN,LOW);

}
      /*else{
    digitalWrite(LED_BUILTIN,HIGH);}*/
}

    
    /*if (count==3){
      count =0;
      return count;
      Serial.println(count);
    }
    if(count==0){
      digitalWrite(gpin,HIGH);
    }else if(count==1){
      digitalWrite(bpin,HIGH);}
      else if (count==2{
      digitalWrite(rpin,HIGH);}*/
