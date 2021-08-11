#pragma once
#include "StateInterface.h"

class GumballMachine;

class SoldOutState :public StateInterface
{
public:
	SoldOutState(std::shared_ptr<GumballMachine> machine);

	void InsertQuarter() override;

	void EjectQuarter() override;

	void TurnCrank() override;

	void Dispense() override;


	std::string GetName() override;

private:
	std::shared_ptr<GumballMachine> m_Machine;
};
