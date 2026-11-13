
#include "VL53L0X.h"
#include "TCA9548.h"
#include "Wire.h"

TCA9548 MP(0x70);
const int o = 5;
VL53L0X sensors[o];
uint16_t distances[o];
int counter = 0;
int ver;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Wire.begin();
  Wire.setClock(400000); // 400 kHz Fast I2C
  
  if(!MP.begin()){
    Serial.println("TCA9548 not found!");
    while(1);
  }
  for (uint8_t i = 0; i<o;i++ ){
    MP.selectChannel(i);
    sensors[i].setTimeout(500);
    sensors[i].startContinuous();
    if (!sensors[i].init()) {
      Serial.print("Sensor failed on channel ");
      Serial.println(i);
      while (1);
      
  }
}

}
void loop() {
  // put your main code here, to run repeatedly:
for (uint8_t i = 0; i < o; i++) {
    MP.selectChannel(i);
    
    distances[i] = sensors[i].readRangeContinuousMillimeters();
}
Serial.println(distances[counter]);
counter++;
if (counter > 5){
  counter = 0;
}

ver = (distance[0]+distance[1]+distance[2]+distance[3]+distance[4])/5;
  
}
