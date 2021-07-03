#pragma once
#include <iostream>
#include "DisplayElement.h"
#include "Observer.h"
#include "Subject.h"

class CurrentConditionDisplay : public Observer, public DisplayElement
{

public:
	CurrentConditionDisplay(const std::string& Name, Subject* weatherStation)
		:Observer(Name), m_WeatherStation{weatherStation}
	{  
		
		m_WeatherStation->RegisterObserver(this);
	}
	~CurrentConditionDisplay()
	{
		m_WeatherStation->RemoveObserver(this);
	}
	

	void Update(const WeatherData& data) override
	{
		m_Data = data;
		Display();
	}

	void Display() const override
	{
		std::cout << "[ " << GetName() << " ]"
			<< "\n    Temp: " << m_Temp
			<< "\n    Humidity: " << m_Humidity
			<< "\n    Pressure: " << m_Pressure << "\n";
	}

private:
	float m_Temp{ 0 }, m_Humidity{ 0 }, m_Pressure{ 0 };
	WeatherData m_Data;
	Subject* m_WeatherStation;
};


class StatisticsDisplay : public Observer, public DisplayElement
{

public:
	StatisticsDisplay(const std::string& Name, Subject* weatherStation)
		:Observer(Name), m_WeatherStation{ weatherStation }
	{
		m_WeatherStation->RegisterObserver(this);
	}
	~StatisticsDisplay()
	{
		m_WeatherStation->RemoveObserver(this);
	}

	void Update(const WeatherData& data) override
	{
		if (data.m_Temp < m_MinTemp)
			m_MinTemp = data.m_Temp;
		if (data.m_Temp > m_MaxTemp)
			m_MaxTemp = data.m_Temp;
		m_SumTemp += data.m_Temp;
		m_CountTemp += 1;

		if (data.m_Humidity < m_MinHumidity)
			m_MinHumidity = data.m_Humidity;
		if (data.m_Humidity > m_MaxHumidity)
			m_MaxHumidity = data.m_Humidity;
		m_SumHumidity += data.m_Humidity;
		m_CountHumidity += 1;

		if (data.m_Pressure < m_MinPressure)
			m_MinPressure = data.m_Pressure;
		if (data.m_Pressure > m_MaxPressure)
			m_MaxPressure = data.m_Pressure;
		m_SumPressure += data.m_Pressure;
		m_CountPressure += 1;

		Display();
	}

	void Display() const override
	{
		std::cout << "[ " << GetName() << " ]"
			<< "\n    min / max / avg"
			<< "\n    Temp: " << m_MinTemp << " / " << m_MaxTemp << " / " << m_SumTemp / m_CountTemp
			<< "\n    Humidity: " << m_MinHumidity << " / " << m_MaxHumidity << " / " << m_SumHumidity / m_CountHumidity
			<< "\n    Pressure: " << m_MinPressure << " / " << m_MaxPressure << " / " << m_SumPressure / m_CountPressure << "\n";
	}

private:
	float m_MinTemp{ 999.0f }, m_MaxTemp{ -999.0f }, m_CountTemp{ 0.0f }, m_SumTemp{ 0.0f };
	float m_MinPressure{ 999.0f }, m_MaxPressure{ -999.0f }, m_CountPressure{ 0.0f }, m_SumPressure{ 0.0f };
	float m_MinHumidity{ 999.0f }, m_MaxHumidity{ -999.0f }, m_CountHumidity{ 0.0f }, m_SumHumidity{ 0.0f };
	Subject* m_WeatherStation;
};


class ForecastDisplay : public Observer, public DisplayElement
{

public:
	ForecastDisplay(const std::string& Name, Subject* weatherStation)
		:Observer(Name), m_WeatherStation{ weatherStation }
	{
		m_WeatherStation->RegisterObserver(this);
	}
	~ForecastDisplay()
	{
		m_WeatherStation->RemoveObserver(this);
	}

	void Update(const WeatherData& data) override
	{
		m_LastPressure = m_CurrentPressure;
		m_CurrentPressure = data.m_Pressure;
		Display();
	}

	void Display() const override
	{
		std::cout.setf(std::ios::showpoint);
		std::cout.precision(3);

		std::cout << "[ " << GetName() << " ]";
		if (m_CurrentPressure > m_LastPressure)
		{
			std::cout << "\n    Improving weather on the way!\n";
		}
		else if (m_CurrentPressure < m_LastPressure)
		{
			std::cout << "\n    Watch out for cooler, rainy weather\n";
		}
		else
		{
			std::cout << "\n    More of the same\n";
		}
	}

private:
	float m_LastPressure{ 0.0f };
	float m_CurrentPressure{ 0.0f };
	Subject* m_WeatherStation;
};


class HeatIndexDisplay : public Observer, public DisplayElement
{

public:
	HeatIndexDisplay(const std::string& Name, Subject* weatherStation)
		:Observer(Name), m_WeatherStation{ weatherStation }
	{
		m_WeatherStation->RegisterObserver(this);
	}
	~HeatIndexDisplay()
	{
		m_WeatherStation->RemoveObserver(this);
	}

	void Update(const WeatherData& data) override
	{
		m_Temp = data.m_Temp;
		m_Humidity = data.m_Humidity;
		Display();
	}

	void Display() const override
	{
		std::cout.setf(std::ios::showpoint);
		std::cout.precision(3);

		std::cout.setf(std::ios::showpoint);
		std::cout.precision(3);
		std::cout << "[ " << GetName() << " ]\n";
		std::cout << "    Current Heat Index: " << ComputeHeatIndex(m_Temp, m_Humidity) << "\n";
	}
private:
	float ComputeHeatIndex(float t, float rh) const
	{
		float index = ((16.923f + (0.185212f * t) + (5.37941f * rh) - (0.100254f * t * rh)
			+ (0.00941695f * (t * t)) + (0.00728898f * (rh * rh))
			+ (0.000345372f * (t * t * rh)) - (0.000814971f * (t * rh * rh)) +
			(0.0000102102f * (t * t * rh * rh)) - (0.000038646f * (t * t * t)) + (0.0000291583f *
				(rh * rh * rh)) + (0.00000142721f * (t * t * t * rh)) +
			(0.000000197483f * (t * rh * rh * rh)) - (0.0000000218429f * (t * t * t * rh * rh)) +
			0.000000000843296f * (t * t * rh * rh * rh)) -
			(0.0000000000481975f * (t * t * t * rh * rh * rh)));
		return index;
	}
private:
	float m_HeatIndex{ 0.0f }, m_Temp{ 0.0f }, m_Humidity{ 0.0f };
	Subject* m_WeatherStation;
};
