int LEDB = 3;
int LEDG = 5;
int LEDR = 6;
int i = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(LEDG, OUTPUT);
pinMode(LEDR, OUTPUT);
pinMode(LEDG, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0;i<256; i++){
    analogWrite(LEDB, i);
    analogWrite(LEDR, i*3);
    analogWrite(LEDG, sqrt(i));
    delay(50);
    
    }   
   if (i==255; i-1){
   analogWrite(LEDB, 255-i);
   analogWrite(LEDR, 255-(i*3));
   analogWrite(LEDG, 255-(i-3));
   delay(50);
    
    } 
}
