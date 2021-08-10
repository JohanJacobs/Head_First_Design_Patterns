#include "HasQuarterState.h"
#include "../GumballMachine/GumballMachine.h"


HasQuarterState::HasQuarterState(GumballMachine* machine)
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
	m_Machine->SetState(m_Machine->GetSoldState());
}

void HasQuarterState::Dispense()
{
	std::cout << "No gumball dispensed!\n";
}

std::string HasQuarterState::GetName()
{
	return "Has Quarter State";
}
