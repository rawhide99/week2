#define LED_PIN 7
#define POT_PIN A1

void setup()
{
  pinMode(LED_PIN, OUTPUT);
  pinMode(POT_PIN, INPUT);
}

void loop()
{
  int pot_val = analogRead(A1);
  int bright = pot_val/4;
  analogWrite(LED_PIN, bright);
}