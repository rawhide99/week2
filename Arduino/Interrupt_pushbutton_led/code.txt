#define LED_PIN 7
#define BUTTON_PIN 2
 
// Boolean to represent toggle state
 
volatile bool toggleState = false;
 
void checkSwitch() 
{
  if (digitalRead(BUTTON_PIN) == LOW) 
  {
    delay(200);
    toggleState = !toggleState;
    digitalWrite(LED_PIN,toggleState);
  }
}
 
void setup() 
{
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(BUTTON_PIN),checkSwitch, FALLING);
}
 
void loop() 
{
  Serial.println("Delay Started");
  delay(5000);
  Serial.println("Delay Finished");
  Serial.println("..............");
}