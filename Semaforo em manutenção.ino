int valordoterminaldois = 0;

void setup(){
 pinMode(13, OUTPUT);
 pinMode(11, OUTPUT);
 pinMode(7, OUTPUT);
 
  pinMode(12, INPUT);
}




void loop(){
 
  valordoterminaldois = digitalRead(2);
 
  if(valordoterminaldois == 0 ) {
    digitalWrite(11, HIGH);
    delay(1000);
    digitalWrite(11, LOW);
    delay(1000);
  }
  else{
digitalWrite(13, HIGH);
digitalWrite(11,LOW);

 
digitalWrite(7, LOW);
 delay(1000);
digitalWrite(13, LOW);
digitalWrite(11, LOW);  
digitalWrite(7, HIGH);  
  delay(1000);
digitalWrite(13, LOW);
digitalWrite(11, HIGH);  
digitalWrite(7, LOW);
  delay(1000);
 
  }
 
 
 
}