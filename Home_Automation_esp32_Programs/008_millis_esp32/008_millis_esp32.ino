unsigned long int previous_millis = 0;
unsigned long int interval = 1000;

void setup() {
  // put your setup code here, to run once:

Serial.begin(115200);
pinMode(2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

unsigned long int current_millis =   millis();

if((current_millis - previous_millis) > interval)
{
  Serial.println("Hello World");
  previous_millis = current_millis;
  }

  digitalWrite(2,HIGH);
  delay(100);
  digitalWrite(2,LOW);
  delay(100);

}
