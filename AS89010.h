/* AMS AS89010 Current-to-Digital Converter */

#ifndef __AS89010_H__
#define __AS89010_H__

#include <Wire.h>
#include <Arduino.h>

class AS89010{
	public:
		AS890101();
		bool begin(uint8_t sensorAddress = 0x__, TwoWire &wirePort = Wire);
		
	
	private:
	
	}

