const int PIR_PIN = 27;
const int LED_PIN = 2;

void setup()
{
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);
}

void loop()
{
  int motion = digitalRead(PIR_PIN);
  if(motion == HIGH)
  {
    Serial.println("Motion Detected");
    digitalWrite(LED_PIN, HIGH);
  }
  else
  {
    Serial.println("No Motion");
    digitalWrite(LED_PIN, LOW);
  }

  delay(1000);

}