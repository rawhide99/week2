#define NUMS 3

unsigned int led[NUMS] = {2,4,7};
unsigned int button[NUMS] = {8,9,10}; 

int last_button_state[NUMS] = {LOW, LOW, LOW}; // Last state of buttons
unsigned long last_db_time[NUMS] = {0, 0, 0};
unsigned long db_delay = 50;


void setup() 
{
 for(int i = 0; i < NUMS; i++)
 {
  pinMode(led[i], OUTPUT);
  pinMode(button[i], INPUT);
 }

}

void loop() 
{
  for(int x = 0; x < NUMS; x++)
  {
    int reading = digitalRead(button[x]);

    if(reading != last_button_state[x])
    {
      last_db_time[x] = millis();
    }

    if(millis() - last_db_time[x] > db_delay)
    {
      if(reading == HIGH)
      {
        digitalWrite(led[x], HIGH);
        delay(50);
        digitalWrite(led[x], LOW);
      }
    }
    last_button_state[x] = reading;
  }
}
