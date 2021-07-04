#pragma once
#include <string>

#include "Beverage.h"


/*
	Base class / Super class for condiments to use. 
	condiments have to implement GetDescription and GetCost

	the class CondimentDecorator does not have to:
		= take the beverage
		= Implement GetDescription & GetCost. 
	both of these can be done in the condiments classes. Moved them to this class as it was the same code over and over.

	***
	OWNERSHIP: CondimentDecorator owns all the pointers and should delete them when the class is destroyed.
	*** 
*/
class CondimentDecorator : public Beverage
{
public:
	CondimentDecorator(const std::string description, Beverage* beverage)
		:Beverage(description), m_Beverage{beverage}
	{	}

	~CondimentDecorator()
	{
		delete m_Beverage;
	}

	virtual std::string GetDescription() const { return m_Beverage->GetDescription() + ", " + m_Description; }
	virtual double GetCost() const { return m_Beverage->GetCost() + m_Cost; }
protected:
	Beverage* m_Beverage;
};