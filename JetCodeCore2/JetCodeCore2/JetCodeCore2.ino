// This core is only used for sensor data and other operations not related to flight/movement of the Jet

#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

#include "MCU.h"
Adafruit_MPU6050 mpu;

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
  /* Get new sensor events with the readings */
  sensors_event_t acc, gyro, temp;
  mpu.getEvent(&acc, &gyro, &temp);


  printMpuEvent(acc, gyro, temp);
}