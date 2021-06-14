#include <Arduino.h>
#include <Ultrasonic.h>

#define TRIG D7
#define ECHO D8

Ultrasonic ultrasonic(TRIG, ECHO);
int distance;

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  distance = ultrasonic.read();
  Serial.print("Distancia em CM: ");
  Serial.println(distance);
  delay(1000);
}
