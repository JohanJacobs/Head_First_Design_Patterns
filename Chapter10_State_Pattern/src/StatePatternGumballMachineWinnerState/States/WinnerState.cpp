#include "WinnerState.h"
#include "../GumballMachine/GumballMachine.h"

WinnerState::WinnerState(std::shared_ptr<GumballMachine> machine)
	:m_Machine{ machine }
{

}

void WinnerState::InsertQuarter()
{
	std::cout << "Error You can't insert quarter, wait for your second Gumball.\n";
}

void WinnerState::EjectQuarter()
{
	std::cout << "Sorry, you already turned the crank!\n";
}

void WinnerState::TurnCrank()
{
	std::cout << "Turning twice doesn't get you another gumball\n";
}

void WinnerState::Dispense()
{
	std::cout << "You are a winner! you get two gumballs!\n";
	m_Machine->ReleaseBall();

	if (m_Machine->GetCount() == 0)
	{
		m_Machine->SetState(m_Machine->GetSoldOutState());
	}
	else
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
}

std::string WinnerState::GetName()
{
	return "Winner State";
}
