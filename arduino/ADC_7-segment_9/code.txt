const int segA = 2;
const int segB = 3;
const int segC = 4;
const int segD = 5;
const int segE = 6;
const int segF = 7;
const int segG = 8;

const int SEG_ON = LOW;   // Change to LOW if using common anode
const int SEG_OFF = HIGH;   // Change to HIGH if using common anode

// 7-segment display digit representations
const int digits[10][7] = 
{
  {1, 1, 1, 1, 1, 1, 0},  // 0
  {0, 1, 1, 0, 0, 0, 0},  // 1
  {1, 1, 0, 1, 1, 0, 1},  // 2
  {1, 1, 1, 1, 0, 0, 1},  // 3
  {0, 1, 1, 0, 0, 1, 1},  // 4
  {1, 0, 1, 1, 0, 1, 1},  // 5
  {1, 0, 1, 1, 1, 1, 1},   //6
  {1, 1, 1, 0, 0, 0, 0},   //7
  {1, 1, 1, 1, 1, 1, 1},   //8
  {1, 1, 1, 0, 0, 1, 1}    //9
};

// Function to display a digit on the seven-segment display
void displayDigit(int digit) 
{
  if (digit <0 || digit >9) 
    return; // Validate input

  digitalWrite(segA,digits[digit][0] ? SEG_ON : SEG_OFF);
  digitalWrite(segB,digits[digit][1] ? SEG_ON : SEG_OFF);
  digitalWrite(segC,digits[digit][2] ? SEG_ON : SEG_OFF);
  digitalWrite(segD,digits[digit][3] ? SEG_ON : SEG_OFF);
  digitalWrite(segE,digits[digit][4] ? SEG_ON : SEG_OFF);
  digitalWrite(segF,digits[digit][5] ? SEG_ON : SEG_OFF);
  digitalWrite(segG,digits[digit][6] ? SEG_ON : SEG_OFF);
}

void setup() 
{
  pinMode(segA, OUTPUT);
  pinMode(segB, OUTPUT);
  pinMode(segC, OUTPUT);
  pinMode(segD, OUTPUT);
  pinMode(segE, OUTPUT);
  pinMode(segF, OUTPUT);
  pinMode(segG, OUTPUT);
  
  Serial.begin(9600);
}

void loop() 
{
  int analogValue = analogRead(A0);
  float voltage = analogValue * (5.0 /1023.0); // Convert analog value to voltage
  
  Serial.print("Analog Value: ");
  Serial.print(analogValue);
  Serial.print(" Voltage: ");
  Serial.print(voltage);
  
  float temp = voltage *100; // Convert voltage to temperature in Celsius
  Serial.print(" Temperature: ");
  Serial.print(temp);
  Serial.println(" °C");

  int digit = static_cast<int>(temp);

  if (digit < 0 || digit > 100) 
  {
      digit =0; // Ensure we don't try to access a negative index.
  }

  int tensDigit = digit /10; // Tens place (integer division)

  displayDigit(tensDigit); // Call the modular display function
  
  delay(1000); // Delay for readability
}