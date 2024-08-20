#include "Iweathersensor.h"

/// This is a stub for a weather sensor. For the sake of testing
/// we create a stub that generates weather data and allows us to
/// test the other parts of this application in isolation
/// without needing the actual Sensor during development

class SensorStub : public WeatherSpace::IWeatherSensor {
    int m_humidity;
    int m_precipitation;
    double m_temperatureInC;
    int m_windSpeedKMPH;

 public:
    explicit SensorStub(int humidity = 72, int precipitation = 70,
        double temperature = 26, int windSpeed = 52);

    int Humidity() const override;
    int Precipitation() const override;
    double TemperatureInC() const override;
    int WindSpeedKMPH() const override;
};
