#pragma once

#include  "CondimentDecorator.h"

class Mocha : public CondimentDecorator
{
public:
	Mocha(Beverage* beverage)		// pass the Beverage and description to the base class 
		:CondimentDecorator{"Mocha", beverage}
	{
		m_Cost = 0.20; // set the price in the CondimentDecorator::Beverage::m_Cost
	}		
};


class Soy : public CondimentDecorator
{
public:
	Soy(Beverage* beverage)
		:CondimentDecorator{ "Soy", beverage }
	{
		m_Cost = 0.15;
	}
};


class Whip : public CondimentDecorator
{
public:
	Whip(Beverage* beverage)
		:CondimentDecorator{ "Whip",beverage }
	{
		m_Cost = 0.10;
	}
};


class SteamedMilk : public CondimentDecorator
{
public:
	SteamedMilk(Beverage* beverage)
		:CondimentDecorator{ "Steamed Milk",beverage }
	{
		m_Cost = 0.15;
	}
};