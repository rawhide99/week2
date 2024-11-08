#define LED_PIN 9 // 9 is taken for PWM

void setup() 
{
  pinMode(9, OUTPUT);
}

void loop() 
{
  int light;
  for(light = 0; light <= 255; light ++)
  {
    analogWrite(9, light);
    delay(15);
  }

  delay(20);

  for(light = 255; light >= 0; light --)
  {
    analogWrite(9, light);
    delay(15);
  }

  delay(20);
}
