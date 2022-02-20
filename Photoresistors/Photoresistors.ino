int lightPin=A0;
int lightVal;
int dv=500;
int greenLED=7;
int redLED=8;


void setup() {
  // put your setup code here, to run once:
  pinMode(lightPin,INPUT);
  pinMode(greenLED,OUTPUT);
  pinMode(redLED,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  lightVal=analogRead(lightPin);
  Serial.println(lightVal);
  //delay(dv);

/*
  if (lightVal<600){
    digitalWrite(greenLED,HIGH);
    digitalWrite(redLED,LOW);
    }

  if (lightVal>600){
    digitalWrite(greenLED,LOW);
    digitalWrite(redLED,HIGH);
    }*/

  if (lightVal<20){
    digitalWrite(greenLED,LOW);
    //digitalWrite(redLED,LOW);
    }

  if (lightVal>=20){
    digitalWrite(greenLED,HIGH);
    //digitalWrite(redLED,HIGH);
    }

}
