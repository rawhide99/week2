// Define pin numbers
const int inputPin = 2;  // Input pin for the button
const int outputPin = 13; // Output pin for the LED

void setup() {
    // Initialize the input pin as INPUT with pull-up resistor
    pinMode(inputPin, INPUT_PULLUP);
    
    // Initialize the output pin as OUTPUT
    pinMode(outputPin, OUTPUT);
}

void loop() {
    // Read the state of the input pin
    int buttonState = digitalRead(inputPin);
    
    // Check if the button is pressed (LOW state)
    if (buttonState == LOW) {
        // Toggle the output pin state
        digitalWrite(outputPin, !digitalRead(outputPin));
        
        // Wait for a short period to debounce the button
        delay(200); // Adjust delay as necessary
    }
}