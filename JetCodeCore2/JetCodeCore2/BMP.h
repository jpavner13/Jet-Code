#include <Wire.h>
#include <SPI.h>
#include <Adafruit_Sensor.h>
#include "Adafruit_BMP3XX.h"

void initializeBMP(Adafruit_BMP3XX bmp);
void printBmpData(int temp, int pressure, int alt);