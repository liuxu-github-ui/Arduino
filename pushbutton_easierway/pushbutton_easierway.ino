

int buttonPin=2;
int buttonValue;
void setup() {
  // put your setup code here, to run once:
  
pinMode(buttonPin,INPUT);
digitalWrite(buttonPin,HIGH); // there is a pull up resitor in switch, so just need to provide it with a vdd 5v 
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  buttonValue=digitalRead(buttonPin);
  Serial.print("Your button is: ");
  Serial.println(buttonValue);
  delay(200);

}
