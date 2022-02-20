int myNumb;
int buzzPin=8;
int buzzTime=1;
int buzzTime2=900;
int lightPin=A0;
int lightVal;
String msg="Please input number: ";

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(buzzPin,OUTPUT);
  pinMode(lightPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

/*atvie buzzer
  Serial.println(msg);

  while(Serial.available()==0){
    }

  myNumb=Serial.parseInt();

  if(myNumb>10){
    digitalWrite(buzzPin,HIGH);
    delay(500);
    digitalWrite(buzzPin,LOW);
    
    }*/

   

}
