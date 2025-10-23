#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  analogReadResolution(12);  
  Serial.println("Bắt đầu đọc LDR...");
}

void loop() {
  int lightValue = analogRead(LDR_PIN);
  Serial.print("Light intensity: ");
  Serial.println(lightValue);  

  Serial.print("light:");
  Serial.println(lightValue);

  delay(100);  
}