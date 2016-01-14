const int switchPin = 2; //wired to switch
const int dcPin = 9; //wired to MOSFET
int switchState = 0; //switch begins off

void setup()
{
  pinMode(dcPin, OUTPUT);
  pinMode(switchPin, INPUT);
}

void loop() 
{
  switchState = digitalRead(switchPin); //read if open or closed
  if (switchState == HIGH) //if closed
  {
    digitalWrite(dcPin, HIGH); //send 5V
  }
  else
  {
    digitalWrite(dcPin, LOW); //else do nothing
  }
}
