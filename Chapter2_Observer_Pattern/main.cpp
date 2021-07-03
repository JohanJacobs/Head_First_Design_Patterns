#include <iostream>
#include <string> //std::string
#include <vector> //std::vector

#include "WeatherData.h"    // weather data is stored in a struct 
#include "WeatherSation.h"  // the subject (weathers station)
#include "Displays.h"       // Weather displays

/* Naive solution review 
class WeaterData
{
public:
    void MeasurementChanged()
    {
        float temp = getTemprature();
        float humidity = getHumidity();
        float pressure = getPressure();
           
        // programming to concrete implementations
        // below section changes and therefore should be encapsulated.
        // Can not be easily extended
        // - can't include additional 'views'/ 'displays' 
        // - can't change the "state" and include additional data
        currentConditionsDisplay.update(temp, humidity, pressure);
        statisticsDisplay.update(temp, humidity, pressure);
        forecastDisplay.update(temp, humidity, pressure);
        // update(temp, humidity, pressure): Update function uses common interface atleast.
    }
};
*/


int main()
{
    std::cout << "Hello Head First Design Patterns!\n";
    std::cout << "Chapter 2 - Observer Pattern!\n";

    WeatherStation ws;

    CurrentConditionDisplay cd("CurrentConditionDisplay", &ws);
    StatisticsDisplay sd("StatisticsDisplay", &ws);
    ForecastDisplay fd("ForecastDisplay", &ws);
    HeatIndexDisplay hid("HeatIndexDisplay", &ws);
       
    ws.SetMeasurements(WeatherData(1, 2, 3));
    ws.SetMeasurements(WeatherData(4, 5, 6));
    ws.SetMeasurements(WeatherData(7, 7, 5));
}