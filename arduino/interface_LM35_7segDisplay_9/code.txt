const int segA = 2;
const int segB = 3;
const int segC = 4;
const int segD = 5;
const int segE = 6;
const int segF = 7;
const int segG = 8;

const int digits[10][7] = 
{
  {1, 1, 1, 1, 1, 1, 0},  // 0
  {0, 1, 1, 0, 0, 0, 0},  // 1
  {1, 1, 0, 1, 1, 0, 1},  // 2
  {1, 1, 1, 1, 0, 0, 1},  // 3
  {0, 1, 1, 0, 0, 1, 1},  // 4
  {1, 0, 1, 1, 0, 1, 1},  // 5
  {1, 0, 1, 1, 1, 1, 1},  // 6
  {1, 1, 1, 0, 0, 0, 0},  // 7
  {1, 1, 1, 1, 1, 1, 1},  // 8
  {1, 1, 1, 1, 0, 1, 1}   // 9
};

void displayDigitZero() 
{
    digitalWrite(segA, LOW);    // Segment A on
    digitalWrite(segB, LOW);    // Segment B on
    digitalWrite(segC, LOW);    // Segment C on
    digitalWrite(segD, LOW);    // Segment D on
    digitalWrite(segE, LOW);    // Segment E on
    digitalWrite(segF, LOW);    // Segment F on
    digitalWrite(segG, HIGH);   // Segment G off
}

void displayDigitOne() 
{
    digitalWrite(segA, HIGH);   // Segment A off
    digitalWrite(segB, LOW);    // Segment B on
    digitalWrite(segC, LOW);    // Segment C on
    digitalWrite(segD, HIGH);   // Segment D off
    digitalWrite(segE, HIGH);   // Segment E off
    digitalWrite(segF, HIGH);   // Segment F off
    digitalWrite(segG, HIGH);   // Segment G off
}

void displayDigitTwo() 
{
    digitalWrite(segA, LOW);     // Segment A on
    digitalWrite(segB, LOW);     // Segment B on
    digitalWrite(segC, HIGH);    // Segment C off
    digitalWrite(segD, LOW);     // Segment D on
    digitalWrite(segE, LOW);     // Segment E on
    digitalWrite(segF, HIGH);    // Segment F off
    digitalWrite(segG, LOW);     // Segment G on
}

void displayDigitThree() 
{
    digitalWrite(segA, LOW);      // Segment A on
    digitalWrite(segB, LOW);      // Segment B on
    digitalWrite(segC, LOW);      // Segment C on
    digitalWrite(segD, LOW);      // Segment D on
    digitalWrite(segE, HIGH);     // Segment E off
    digitalWrite(segF, HIGH);     // Segment F off
    digitalWrite(segG, LOW);      // Segment G on
}

void displayDigitFour() 
{
    digitalWrite(segA, HIGH);     // Segment A off
    digitalWrite(segB, LOW);      // Segment B on
    digitalWrite(segC, LOW);      // Segment C on
    digitalWrite(segD, HIGH);     // Segment D off
    digitalWrite(segE, HIGH);     // Segment E off
    digitalWrite(segF, LOW);      // Segment F on
    digitalWrite(segG, LOW);      // Segment G on
}

void displayDigitFive() 
{
    digitalWrite(segA, LOW);      // Segment A on
    digitalWrite(segB, HIGH);     // Segment B off
    digitalWrite(segC, LOW);      // Segment C on
    digitalWrite(segD, LOW);      // Segment D on
    digitalWrite(segE, HIGH);     // Segment E off
    digitalWrite(segF, LOW);      // Segment F on
    digitalWrite(segG, LOW);      // Segment G on
}

void displayDigitSix() 
{
    digitalWrite(segA, LOW);       // Segment A on
    digitalWrite(segB, HIGH);      // Segment B off
    digitalWrite(segC, LOW);       // Segment C on
    digitalWrite(segD, LOW);       // Segment D on
    digitalWrite(segE, LOW);       // Segment E on
    digitalWrite(segF, LOW);       // Segment F on
    digitalWrite(segG, LOW);       // Segment G on (all segments lit)
}

void displayDigitSeven() 
{
   digitalWrite(segA, LOW);        // Segment A on 
   digitalWrite(segB, LOW);        // Segment B on 
   digitalWrite(segC, LOW);        // Segment C on 
   digitalWrite(segD, HIGH);       // Segment D off 
   digitalWrite(segE, HIGH);       // Segment E off 
   digitalWrite(segF, HIGH);       // Segment F off 
   digitalWrite(segG, HIGH);       // Segment G off 
}

void displayDigitEight() 
{
   digitalWrite(segA, LOW);
   digitalWrite(segB, LOW);
   digitalWrite(segC, LOW);
   digitalWrite(segD, LOW);
   digitalWrite(segE, LOW);
   digitalWrite(segF, LOW);
   digitalWrite(segG, LOW);
}

void displayDigitNine() 
{
   digitalWrite(segA, LOW);
   digitalWrite(segB, LOW);
   digitalWrite(segC, LOW);
   digitalWrite(segD, HIGH);
   digitalWrite(segE, HIGH);
   digitalWrite(segF, LOW);
   digitalWrite(segG, LOW);
}

void setup() 
{
  // Set pins as OUTPUT for each seg
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
  float voltage = analogValue * (5.0 / 1023.0); // Convert analog value to voltage
  
  Serial.print("Analog Value: ");
  Serial.print(analogValue);
  Serial.print(" Voltage: ");
  Serial.print(voltage);
  
  float temp = voltage * 100; // Convert voltage to temperature in Celsius
  Serial.print(" Temperature: ");
  Serial.print(temp);
  Serial.println(" °C");

  int digit = static_cast<int>(temp);
  if (digit < 0 || digit > 100) 
  {
    digit = 0;
  }
  int tensDigit = digit / 10;  // Tens place (integer division)

  switch(tensDigit)
  {
    case 0:
      displayDigitZero();
      break;
    case 1:
      displayDigitOne();
      break;
    case 2:
      displayDigitTwo();
      break;
    case 3:
      displayDigitThree();
      break;
    case 4:
      displayDigitFour();
      break;
    case 5:
      displayDigitFive();
      break;
    case 6:
      displayDigitSix();
      break;
    case 7:
      displayDigitSeven();
      break;
    case 8:
      displayDigitEight();
      break;
    case 9:
      displayDigitNine();
      break;
    default:
      break;
  }
  delay(1000);
}


