#include"src/sensorstub.h"

SensorStub::SensorStub(int humidity, int precipitation,
    double temperature, int windSpeed)
    :m_humidity(humidity),
     m_precipitation(precipitation),
     m_temperatureInC(temperature),
     m_windSpeedKMPH(windSpeed) {}

int SensorStub::Humidity() const{
    return m_humidity;
}

int SensorStub::Precipitation() const {
    return m_precipitation;
}

double SensorStub::TemperatureInC() const {
    return m_temperatureInC;
}

int SensorStub::WindSpeedKMPH() const {
    return m_windSpeedKMPH;
}
