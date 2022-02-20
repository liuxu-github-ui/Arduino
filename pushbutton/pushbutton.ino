//int LEDPin=8;
int buttonPin=12;
int yellowLED=2;
int buttonRead;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 // pinMode(LEDPin,OUTPUT);
  pinMode(buttonPin,INPUT);
  pinMode(yellowLED,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  
  buttonRead=digitalRead(buttonPin);
  Serial.println(buttonRead);

  
  if(buttonRead==0){
    digitalWrite(yellowLED,HIGH);
    
    }
  else if (buttonRead==1){
    digitalWrite(yellowLED,LOW);
    
    }
}
