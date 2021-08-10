#pragma once
#include <iostream>
class StateInterface
{
public:
	virtual void InsertQuarter();
	virtual void EjectQuarter();
	virtual void TurnCrank();
	virtual void Dispense();
	virtual std::string GetName();
	virtual ~StateInterface();
};