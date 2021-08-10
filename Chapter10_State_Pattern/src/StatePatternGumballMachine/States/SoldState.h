#pragma once
#include "StateInterface.h"

class GumballMachine;

class SoldState :public StateInterface
{
public:
	SoldState(GumballMachine* machine);

	void InsertQuarter() override;

	void EjectQuarter() override;

	void TurnCrank() override;

	void Dispense() override;

	std::string GetName() override;

private:
	GumballMachine* m_Machine;
};

