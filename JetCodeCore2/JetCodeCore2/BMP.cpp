#include "BMP.h"

void initializeBMP(Adafruit_BMP3XX bmp){
    while (!bmp.begin_I2C()) {
        Serial.println("Could not find BMP-390 sensor, trying again...");
        delay(1000);
    }
    Serial.println("BMP-390 Connected!");

    bmp.setTemperatureOversampling(BMP3_OVERSAMPLING_8X);
    bmp.setPressureOversampling(BMP3_OVERSAMPLING_4X);
    bmp.setIIRFilterCoeff(BMP3_IIR_FILTER_COEFF_3);
    bmp.setOutputDataRate(BMP3_ODR_50_HZ);
}

void printBmpData(int temp, int pressure, int alt){
    Serial.print("Temperature = ");
    Serial.print(temp);
    Serial.println(" *C");

    Serial.print("Pressure = ");
    Serial.print(pressure / 100.0);
    Serial.println(" hPa");

    Serial.print("Approx. Altitude = ");
    Serial.print(alt);
    Serial.println(" m");
}
