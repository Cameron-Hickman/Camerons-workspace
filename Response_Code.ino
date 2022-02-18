
void setup() {

  Serial.begin(9600);
  Serial.println("Hello World");
  //while (! Serial);
  
}

void loop() {
  if (Serial.available()){
    char ch = Serial.read();
     if (ch >= 'A' &&  ch < 'a' ){
      Serial.print(ch,0);
      }
      
    if (ch > 'a' && ch <= 'z'){
      Serial.print(ch-1,0);
     } 

    if (ch == 'a'){
      Serial.print("z"); 
    }
    if (ch == ' '){
      Serial.print(ch);
    }
  } 
}
