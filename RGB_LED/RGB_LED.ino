
int redPin=3;
int greenPin=7;
int bluePin=8;
int myVoltPin=A0;
int readPinVal;
String myColor;
String msg="What Color do you want? ";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);
pinMode(myVoltPin,INPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:

/*
Serial.println(msg);
while(Serial.available()==0){

  //Keep waiting
}

myColor=Serial.readString();

if(myColor=="red"){
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
}

if(myColor=="green"){
  digitalWrite(greenPin,HIGH);
  digitalWrite(redPin,LOW);
  digitalWrite(bluePin,LOW);
}

if(myColor=="blue"){
  digitalWrite(bluePin,HIGH);
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
}

if(myColor=="off"){
  digitalWrite(bluePin,LOW);
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
}*/

Serial.println(analogRead(myVoltPin));
readPinVal = analogRead(myVoltPin);
if(readPinVal<300 & readPinVal>100){
   analogWrite(redPin,3);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
  }
else if (readPinVal>=300 && readPinVal<=600){
    digitalWrite(greenPin,HIGH);
  digitalWrite(redPin,LOW);
  digitalWrite(bluePin,LOW);
  
  }

else if (readPinVal>600){
  digitalWrite(bluePin,HIGH);
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  
  }
else{
  
    digitalWrite(bluePin,LOW);
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  }
  

}
