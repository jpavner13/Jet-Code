// This core is only used for sensor data and other operations not related to flight/movement of the Jet

#include <Adafruit_MPU6050.h>
#include <Adafruit_BMP3XX.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>
#include <SPI.h>

#define BMP_SCK 13
#define BMP_MISO 12
#define BMP_MOSI 11
#define BMP_CS 10

#define SEALEVELPRESSURE_HPA (1013.25)

#include "MPU.h"
Adafruit_MPU6050 mpu;

#include "BMP.h"
Adafruit_BMP3XX bmp;

void setup(void) {
  Serial.begin(115200);

  while (!Serial)
    delay(10);

  Serial.println("Welcome to the jet control center!");
  Serial.println("Initializing sensors, please wait...");

  Serial.println("Initializing MPU-6050");
  initializeMPU(mpu);
}

void loop() {
  // Get new sensor events with the readings
  sensors_event_t acc, gyro, temp;
  mpu.getEvent(&acc, &gyro, &temp);

  if (!bmp.performReading()) {
    Serial.println("Failed to perform reading.");
  }


  // Print Data
  printMpuEvent(acc, gyro, temp);

  int alt = bmp.readAltitude(SEALEVELPRESSURE_HPA);
  printBmpData(bmp.temperature, bmp.pressure, bmp.readAltitude(SEALEVELPRESSURE_HPA));
}