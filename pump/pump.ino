// code for controlling the pump relay switch. delay TBD for shot size. 
int pumpRelay = 7; // output pin for relay module
void setup()
{
  pinMode(pumpRelay, OUTPUT);
}

void loop()
{
  digitalWrite(pumpRelay, LOW); // turn pump on
  delay(100); // for 100ms
  digitalWrite(pumpRelay, HIGH); //turn pump off
}
