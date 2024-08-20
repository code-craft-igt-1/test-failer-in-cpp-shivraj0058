#include <assert.h>
#include <string>
#include <iostream>
#include"src/Iweathersensor.h"
#include"src/sensorstub.h"

using std::cout, std::endl, std::string;

void TestRainy() {
    SensorStub sensor;
    string report = Report(sensor);
    cout << report << endl;
    assert(report.find("rain") != string::npos);
}

void TestHighPrecipitationAndLowWindspeed() {
    // This instance of stub needs to be different-
    // to give high precipitation (>60) and low wind-speed (<50)
    SensorStub sensor(65, 70, 28.5, 45);

    // strengthen the assert to expose the bug
    // (function returns Sunny day, it should predict rain)
    string report = Report(sensor);
    assert(report.find("Sunny") != string::npos);
}

int main() {
    TestRainy();
    TestHighPrecipitationAndLowWindspeed();
    cout << "All is well (maybe)\n";
    return 0;
}
