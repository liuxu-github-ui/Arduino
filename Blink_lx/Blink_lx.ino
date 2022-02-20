/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board
int redLED = 2;
int yellowLED = 7;
int greenLED = 8;

int myVoltPin=A3;
int readVal;
float v2;
int yellowTime = 200;
int redTime = 200;



//int PinLED = 9;

int delayTime=500;
float potValue =0;


int myNumber;
String msg="Please enter your LED color: ";
String msg2="Your number is: ";
String LEDColor;





void setup() {
  // initialize digital pin LED_BUILTIN as an output.

  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED,OUTPUT);
  pinMode(myVoltPin,INPUT);

  // turn on monitor
  Serial.begin(9600);
  
}

// the loop function runs over and over again forever
void loop() {
  

/*


readVal = analogRead(myVoltPin);

v2 = (5./1023.)*readVal;


Serial.println(v2);


for (int i=0;i<=3;i++){
  analogWrite(yellowLED, v2);
  delay(yellowTime);

  analogWrite(yellowLED,LOW);
  delay(yellowTime);

  analogWrite(redLED, v2);
  delay(redTime);

  analogWrite(redLED,LOW);
  delay(redTime);
  
  }

  */

Serial.println(msg);
while(Serial.available()==0){
  // if user doesn't print anything, it will stuck in this loop forever.
  
}

LEDColor = Serial.readString();
Serial.println(LEDColor);

if (LEDColor=="red"){
  digitalWrite(redLED,HIGH);
  digitalWrite(yellowLED,LOW);
  digitalWrite(greenLED,LOW);
  Serial.println("select red");
  
}

if (LEDColor=="yellow"){
  digitalWrite(yellowLED,HIGH);
  digitalWrite(redLED,LOW);
  digitalWrite(greenLED,LOW);
  
}

if (LEDColor=="green"){
  digitalWrite(greenLED,HIGH);
  digitalWrite(redLED,LOW);
  digitalWrite(greenLED,LOW);
  
}
  
  


  
  //Serial.print(msg2);
  //Serial.println(LEDColor);










}
