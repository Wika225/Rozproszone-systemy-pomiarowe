#include <Arduino.h>



String uniqDeviceID();
void setup() {
  Serial.begin(115200);
}

void loop() {
delay(5000);

Serial.println("abc123");
}

String uniqDeviceID(){
  uint64_t chipId = ESP.getEfuseMac() ;
  char id[32];
  sprintf(id,"esp32-%04X%08X",(uint16_t)(chipId>>32),(uint32_t)chipId) ;
  return id;

}