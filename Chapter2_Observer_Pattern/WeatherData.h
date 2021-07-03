#pragma once

/*
	struct to hold weather data.
*/
struct WeatherData
{
	WeatherData(float temp = 0.0f, float humidity = 0.0f, float pressure = 0.0f)
		:m_Temp{ temp }, m_Humidity{ humidity }, m_Pressure{ pressure } {}

	WeatherData(const WeatherData& Other)
		:m_Temp{ Other.m_Temp }, m_Humidity{ Other.m_Humidity }, m_Pressure{ Other.m_Pressure } {}

	float m_Temp;
	float m_Humidity;
	float m_Pressure;
};

