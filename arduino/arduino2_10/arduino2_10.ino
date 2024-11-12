void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  if (Serial.available() > 0) 
  { 
    String message = Serial.readStringUntil('\n'); // Read the incoming message until newline
    Serial.print("Received: ");
    Serial.println(message);
  }
}