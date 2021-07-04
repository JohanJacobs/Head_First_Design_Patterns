#pragma once
#include "Beverage.h"

class Espresso :public Beverage
{
public:
	Espresso()
		:Beverage{ "Espresso" }
	{
		m_Cost = 1.99;
	}
		
	std::string GetDescription() const override
	{
		return m_Description;
	}

	double GetCost() const override
	{
		return m_Cost;
	}	
};


class HouseBlend :public Beverage
{
public:
	HouseBlend()
		:Beverage{ "House Blend Coffee" }
	{
		m_Cost = 0.89;
	}
};


class DarkRoast:public Beverage
{
public:
	DarkRoast()
		:Beverage{ "Dark Roast Coffee" }
	{
		m_Cost = 0.99;
	}
};


class Decaf :public Beverage
{
public:
	Decaf()
		:Beverage{ "Decaf Coffee" }
	{
		m_Cost = 1.05;
	}
};


