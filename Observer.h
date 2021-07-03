#pragma once

#include <string>
#include <memory>

#include "WeatherData.h"

/*
	Base class for the observer pattern.
	The observer interface will connect to a subject
*/
class Observer
{
public:
	Observer(const std::string& ObserverName)
		:m_Name(ObserverName) { }

	virtual void Update(const WeatherData& data) = 0;

	const inline std::string& GetName() const { return m_Name; }
	bool operator ==(const std::shared_ptr<Observer> other) { return GetName() == other->GetName(); } // overload == operator to make it easier to compare.

private:
	std::string m_Name;    // used to identify the observer.
};

