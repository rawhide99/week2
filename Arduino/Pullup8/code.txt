#define BUTTON_PIN 2

void setup() 
{
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}

void loop() 
{
  // Read the button state
  int buttonState = digitalRead(BUTTON_PIN);

  // Print the button state to the Serial Monitor
  if (buttonState == LOW) 
  {
    Serial.println("Button Pressed");
    delay(1000);
  }
  else 
  {
    Serial.println("Button Released");
    delay(1000);
  }
  
}

