#include<WiFi.h>
#include<DHT.h>

#define DHTPIN  14        //dht pin defined
#define DHTTYPE DHT11     //dht type defined

WiFiClient client;

DHT dht(DHTPIN,DHTTYPE);

char ssid[] = "Your_SSID";
char pass[] = "Your_PASS";
char server[] = "api.thingspeak.com";

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
dht.begin();
WiFi.begin(ssid,pass);
Serial.println("Connecting");
while(WiFi.status()!=WL_CONNECTED)
{
  Serial.print(".");
  delay(100);
  }
Serial.println("Connected");
}

void loop() {
  // put your main code here, to run repeatedly:
float temperature = dht.readTemperature();
float humidity = dht.readHumidity();

Serial.println("Temperature:" + String(temperature) + " " + "Humidity:" + String(humidity));
client.stop();
if(client.connect(server,80))
{
  client.println("GET api (from write a channel feed)" + String(temperature) + "&field2=" + String(humidity));
  }
delay(10000);
}
