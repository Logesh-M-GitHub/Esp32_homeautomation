// 12 bit resolution 2^12 = 4096, (0-4095)
// 10 bit resolution 2^10 = 1024, (0-1023)

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(34,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogReadResolution(12);
int x = analogRead(34);
Serial.println(x);
delay(1000);
}
