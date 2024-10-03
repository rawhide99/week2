#define LED_PIN1 2
#define LED_PIN2 4
#define LED_PIN3 7
#define BUTTON_PIN1 8
#define BUTTON_PIN2 9
#define BUTTON_PIN3 10


void setup() 
{
 pinMode(LED_PIN1, OUTPUT);
 pinMode(LED_PIN2, OUTPUT);
 pinMode(LED_PIN3, OUTPUT);
 pinMode(BUTTON_PIN1, INPUT);
 pinMode(BUTTON_PIN2, INPUT);
 pinMode(BUTTON_PIN3, INPUT);
}

void loop() 
{
  if(digitalRead(BUTTON_PIN1) == HIGH)
  {
    digitalWrite(LED_PIN1,HIGH);
    delay(50);
    digitalWrite(LED_PIN1,LOW);
    delay(50);
  }
  
  if(digitalRead(BUTTON_PIN2) == HIGH)
  {
    digitalWrite(LED_PIN2,HIGH);
    delay(50);
    digitalWrite(LED_PIN2,LOW);
    delay(50);
  }

  if(digitalRead(BUTTON_PIN3) == HIGH)
  {
    digitalWrite(LED_PIN3,HIGH);
    delay(50);
    digitalWrite(LED_PIN3,LOW);
    delay(50);
  }
}