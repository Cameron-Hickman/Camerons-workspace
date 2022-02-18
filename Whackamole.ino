unsigned long time1,time2;
unsigned long previoustime = 0;
unsigned long wait = 2000;
int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int ButtonY = 5;
int ButtonB = 6;
int ButtonG = 7;
int buttonMode = 0;
int previousButton = 0;
long randomNumber;
int i = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(ButtonY,INPUT_PULLUP);
  pinMode(ButtonB,INPUT_PULLUP);
  pinMode(ButtonG,INPUT_PULLUP);

}

void loop() {
  unsigned long milliseconds = ((time1-time2)%1000);
  if ( milliseconds >= 999) milliseconds == 0;
      randomNumber = random(0,3);
        switch(randomNumber)
        {
          case 0:
            
            digitalWrite(LED1, HIGH);
            digitalWrite(LED2, LOW);
            digitalWrite(LED3, LOW);
            while(digitalRead(ButtonY)==HIGH);{
            time1 = millis();}
            while (digitalRead(ButtonY)==LOW){
            delay(250);
            time2= millis();
            Serial.print (milliseconds);}
            time1 = previoustime;
            digitalWrite(LED1,LOW);
            delay(500);
          break;
          
          case 1: 
            
            digitalWrite(LED1, LOW);
            digitalWrite(LED2, HIGH);
            digitalWrite(LED3, LOW);
            while(digitalRead(ButtonB)==HIGH);{
            time1 = millis();}
            while (digitalRead(ButtonB)==LOW){
            delay(250);
            time2 = millis();
            Serial.print (milliseconds);}
            time1 = previoustime;
            digitalWrite(LED2,LOW);
            delay(500);
          break;
          
          case 2:
            
            digitalWrite(LED1, LOW);
            digitalWrite(LED2, LOW);
            digitalWrite(LED3, HIGH);
            while(digitalRead(ButtonG)==HIGH);{
            time1 = millis();}
            while (digitalRead(ButtonG)==LOW){
            delay(250);
            time2 = millis();
            Serial.print (milliseconds);}
            time1 = previoustime;
            digitalWrite(LED3,LOW);
            delay(500);
          break;

      }
    }
            
  
