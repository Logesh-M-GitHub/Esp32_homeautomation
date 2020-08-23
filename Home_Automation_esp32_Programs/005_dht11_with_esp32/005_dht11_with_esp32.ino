#include "DHT.h"

#define DHTPIN    4
#define DHTTYPE   DHT11

DHT dht(DHTPIN,DHTTYPE);

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
float temperature = dht.readTemperature();
float Humidity = dht.readHumidity();

if(isnan(temperature) | isnan(Humidity))
{
  Serial.println("DHT11 failed to read!");
  return;
  }

  Serial.println("Temperature: " + String(temperature) + " Humidity: " + String(Humidity));
  Serial.println();
  delay(2000);
}
