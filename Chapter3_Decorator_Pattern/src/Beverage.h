#pragma once 
#include <string>

/*
	Beverage is the base class / Super class for the decorator pattern.
*/

class Beverage
{
public:
	Beverage(const std::string& description = "Unknown Beverage")
		:m_Description{ description }, m_Cost{ 0.0 }
	{	}

	virtual std::string GetDescription() const { return m_Description; }
	virtual double GetCost() const { return m_Cost; }

protected:
	std::string m_Description;
	double m_Cost;
};
