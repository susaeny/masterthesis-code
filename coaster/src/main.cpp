#include <Arduino.h>

int forcePin = A0;
int forceReading;
int cupDetected = 800;

 
void setup(void) 
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}
 
void loop(void) 
{
  forceReading = analogRead(forcePin);
  Serial.print("Analog reading = ");
  Serial.println(forceReading);

  if(forceReading < cupDetected) {
    digitalWrite(LED_BUILTIN, HIGH);
  } else if (forceReading > 
  cupDetected) {
    digitalWrite(LED_BUILTIN, LOW);
  }
 
  delay(500);
}