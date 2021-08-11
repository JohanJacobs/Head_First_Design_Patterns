#pragma once

#include <memory>
#include "StateInterface.h"

class GumballMachine;

class WinnerState :public StateInterface
{
public:
	WinnerState(std::shared_ptr<GumballMachine> machine);

	void InsertQuarter() override;

	void EjectQuarter() override;

	void TurnCrank() override;

	void Dispense() override;

	std::string GetName() override;

private:
	std::shared_ptr<GumballMachine> m_Machine;
};

