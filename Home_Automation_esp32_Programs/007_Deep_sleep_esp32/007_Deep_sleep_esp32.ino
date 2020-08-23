void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);   

pinMode(33,INPUT);

for(int i=0;i<5;i++)
{
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
  }
  esp_sleep_enable_ext0_wakeup(GPIO_NUM_33,1);
  esp_deep_sleep_start();
}

void loop() {
  // put your main code here, to run repeatedly:

}
