#include "SoldState.h"
#include "../GumballMachine/GumballMachine.h"
SoldState::SoldState(GumballMachine* machine)
	:m_Machine{machine}
{

}

void SoldState::InsertQuarter()
{
	std::cout << "Please wait, we're already giving you a gumball.\n";
}

void SoldState::EjectQuarter()
{
	std::cout << "Sorry, you already turned the crank!\n";
}

void SoldState::TurnCrank()
{
	std::cout << "turning twice doesn't get you another gumball\n";
}

void SoldState::Dispense()
{
	m_Machine->ReleaseBall();
	if (m_Machine->GetCount() > 0)
	{
		m_Machine->SetState(m_Machine->GetNoQuarterState());
	}
	else
	{
		std::cout << "Oops, out of gumballs!\n";
		m_Machine->SetState(m_Machine->GetSoldOutState());
		
	}
}

std::string SoldState::GetName()
{
	return "SoldState";
}
