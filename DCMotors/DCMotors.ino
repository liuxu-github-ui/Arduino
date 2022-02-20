int speedPin=5; // chip pin1 connect to 5 which provide an analog output
int dir1=4;  // chip pin2,7 connect 4,3 which control the rotation speed
int dir2=3;
int mSpeed=255; // 255 is the full speed min=0, max=255



void setup() {
  // put your setup code here, to run once:

pinMode(speedPin,OUTPUT);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:


digitalWrite(dir1,HIGH);
digitalWrite(dir2,LOW);

analogWrite(speedPin,mSpeed);
}
