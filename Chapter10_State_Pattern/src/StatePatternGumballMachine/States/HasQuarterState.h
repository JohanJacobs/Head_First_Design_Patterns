#pragma once

#include "StateInterface.h"

class GumballMachine;

class HasQuarterState :public StateInterface
{
public:
	HasQuarterState(GumballMachine* machine);

	void InsertQuarter() override;

	void EjectQuarter() override;

	void TurnCrank() override;

	void Dispense() override;


	std::string GetName() override;

private:
	GumballMachine* m_Machine;
};
