#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

void initializeMPU(Adafruit_MPU6050 mpu);
void printMpuEvent(sensors_event_t a, sensors_event_t g, sensors_event_t temp);