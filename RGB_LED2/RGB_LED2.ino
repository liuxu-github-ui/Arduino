int redPin=2;
int greenPin=7;
int bluePin=8;
String myColor;
String msg="What color? ";



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(bluePin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
//digitalWrite(redPin,HIGH);
  Serial.println(msg);
  while(Serial.available()==0){
    
    }

  myColor=Serial.readString();
  
  if (myColor == "red"){
    Serial.println("color is: "+myColor);
    digitalWrite(redPin,HIGH);
    }

}
