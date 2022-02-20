int greenLED=7;
int redLED=8;
void setup() {
  // put your setup code here, to run once:
  pinMode(greenLED,OUTPUT);
  pinMode(redLED,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redLED,HIGH);

}
