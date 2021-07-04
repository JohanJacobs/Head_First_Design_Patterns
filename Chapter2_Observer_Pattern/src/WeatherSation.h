#pragma once
#include "Subject.h"
#include "WeatherData.h"

/*
	The weather station, implementing the subject interface. 

	Observers can connect to the weather station to get state updates. 
*/
class WeatherStation :public Subject
{
public:
	void SetMeasurements(const WeatherData& data)
	{
		m_Data = data;
		MeasurementsChanged();
	}

private:
	void NotifyObservers() override
	{
		auto data = WeatherData(m_Temp, m_Humidity, m_Pressure);
		for (auto& o : m_Observers)
		{
			o->Update(data); // forward data to each observer.
		}
	}

	void MeasurementsChanged()
	{
		NotifyObservers();
	}

private:
	float m_Temp{ 0 }, m_Humidity{ 0 }, m_Pressure{ 0 };
	WeatherData m_Data;
};
