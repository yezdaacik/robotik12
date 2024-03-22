void setup() {
Serial.begin(9600);
pinMode(7,OUTPUT);//Trig
pinMode(6,INPUT); //Echo
 pinMode(2,OUTPUT);
 pinMode(4,OUTPUT);
  
}

void loop() {
digitalWrite(7,1); delay(1);
digitalWrite(7,0);
int sure=pulseIn(6,1);
int mesafe=(sure/2)/28.97;
Serial.print("Olculen Mesafe=");
Serial.println(mesafe);
delay(1);
  
  if(mesafe<80 && mesafe >40){ 
    digitalWrite(2,1); 
    digitalWrite(4,1); 
  delay(800);
    
    digitalWrite(2,0);
   digitalWrite(4,0); 
  delay(800);
}
    if(mesafe<40 && mesafe >20){ 
    digitalWrite(2,1); 
    digitalWrite(4,1); 
  delay(400);
    
    digitalWrite(2,0);
   digitalWrite(4,0); 
  delay(400);
}
      if(mesafe<20 && mesafe >10){ 
    digitalWrite(2,1); 
    digitalWrite(4,1); 
  delay(200);
    
    digitalWrite(2,0);
   digitalWrite(4,0); 
  delay(200);
}
      if(mesafe<10 && mesafe >0){ 
    digitalWrite(2,1); 
    digitalWrite(4,1); 
  delay(100);
    
    digitalWrite(2,0);
   digitalWrite(4,0); 
  delay(100);
}
}
  