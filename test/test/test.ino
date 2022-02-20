int LEDPin=8;
int buttonPin=12;
int buttonPin2=13;
int buttonRead;
int buttonRead2;
int dt=250;

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(LEDPin,OUTPUT);
pinMode(buttonPin,INPUT);
pinMode(buttonPin2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonRead=digitalRead(buttonPin);
  buttonRead2=digitalRead(buttonPin2);
  Serial.println(buttonRead2);
  //delay(dt);

  if(buttonRead==1 || buttonRead2==1){
    digitalWrite(LEDPin,LOW);
    }
  if(buttonRead==0 || buttonRead2==0){
    digitalWrite(LEDPin,HIGH);
    }

 

}
