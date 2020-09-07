/* AMS AS89010 Current-to-Digital Converter */

#include <Arduino.h>
#include <Wire.h>
#include "AS89010.h"

AS890101::AS89010(){};

bool begin(uint8_t sensorAddress, TwoWire &wirePort){

  _i2cPort = &wirePort;
  _deviceAddress = sensorAddress;

  _i2cPort->beginTransmission(_deviceAddress);
  if(_i2cPort->endTransmission() != 0){
    
    return false;
}
