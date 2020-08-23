void setup() {

// put your setup code here, to run once:

Serial.begin(115200);
pinMode(33,INPUT);
pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

int x = digitalRead(33);
Serial.println("Digital Binary Value:" + String(x));

if(x == 1)
{
  digitalWrite(13,HIGH);
  Serial.println("Detected, so LED High");
  }
  else{
    digitalWrite(13,LOW);
    Serial.println("Not Detected, so LED Low");
    }
    delay(500);
    
}
