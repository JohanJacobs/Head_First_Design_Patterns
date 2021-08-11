#include "HasQuarterState.h"

#include <random>

#include "../GumballMachine/GumballMachine.h"


HasQuarterState::HasQuarterState(std::shared_ptr<GumballMachine> machine)
	:m_Machine{machine}
{
	
}

void HasQuarterState::InsertQuarter()
{
	std::cout << "You can't insert another quarter.\n";
}

void HasQuarterState::EjectQuarter()
{
	std::cout << "Quarter Returned\n";
	m_Machine->SetState(m_Machine->GetNoQuarterState());
}

void HasQuarterState::TurnCrank()
{
	std::cout << "You turned...\n";

	std::default_random_engine re;
	std::uniform_int_distribution<int> dist(0, 10);
	int value = dist(re);

	if ((value == 0) && (m_Machine->GetCount() > 1))
	{
		m_Machine->SetState(m_Machine->GetWinnerState());
	}
	else
	{
		m_Machine->SetState(m_Machine->GetSoldState());
	}
	
}

void HasQuarterState::Dispense()
{
	std::cout << "No gumball dispensed!\n";
}

std::string HasQuarterState::GetName()
{
	return "Has Quarter State";
}
