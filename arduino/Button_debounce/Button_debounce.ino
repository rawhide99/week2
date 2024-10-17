const int button_pin = 8;
const int led_pin = 7;

int led_state = HIGH;
int button_state;
int last_button_state = LOW;

unsigned long last_db_time = 0;
unsigned long debounce_delay = 50;
unsigned long time_passed;

void setup() 
{
  Serial.begin(9600);
  pinMode(button_pin, INPUT);
  pinMode(led_pin, OUTPUT);
  digitalWrite(led_pin, led_state);
}

void loop() 
{
  int reading = digitalRead(button_pin);
  Serial.println(reading);
  if(reading != last_button_state)
  {
    last_db_time = millis();
  }
  time_passed = millis() - last_db_time;
  Serial.println("Time passed----");
  Serial.println(time_passed);
  if(time_passed > debounce_delay)
  {
    if(reading != button_state)
    {
      button_state = reading;
      if(button_state = HIGH)
      {
        led_state = !led_state;
      }
    }
  }

  digitalWrite(led_pin, led_state);
  last_button_state = reading;
}
