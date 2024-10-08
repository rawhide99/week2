#include <DHT.h>
#include <DHT_U.h>
#define DHTTYPE DHT11
#define DHTPIN 7

DHT dht(DHTPIN, DHTTYPE);

float humidity;
float temperature;
int delay_time = 1000;

void setup() 
{
  Serial.begin(9600);
  Serial.println();
  Serial.println("Status\tHumidity (%)\tTemperature (C)\t(F)");

  dht.begin();  // Start the DHT sensor
}

void loop() 
{
  delay(2000);
  humidity = dht.readHumidity();
  temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature)) 
  {
  Serial.println("Failed to read from DHT sensor!");
  return;
  }
  Serial.print(humidity, 1); // Print humidity with 1 decimal
  Serial.print("\t\t");
  Serial.print(temperature, 1); // Print temperature with 1 decimal
  Serial.print("\t\t");
  Serial.println((temperature * 9.0 / 5.0) + 32, 1); // Convert temperature to Fahrenheit
}







