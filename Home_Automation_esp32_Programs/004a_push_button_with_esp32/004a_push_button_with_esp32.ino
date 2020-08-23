void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(33,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int x = digitalRead(33);  //either 0 or 1
Serial.println("Digital Binary Value:" + String(x));
delay(1000);
}
