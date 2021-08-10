#include "NoQuarterState.h"
#include "../GumballMachine/GumballMachine.h"

NoQuarterState::NoQuarterState(GumballMachine* machine)
	:m_Machine{ machine }
{
}

void NoQuarterState::InsertQuarter()
{
	std::cout << "You inserted a Quarter!\n";
	m_Machine->SetState(m_Machine->GetHasQuarterState());
}

void NoQuarterState::EjectQuarter()
{
	std::cout << "You haven't inserted a quarter\n";
}

void NoQuarterState::TurnCrank()
{	
	std::cout << "You Turned, but there's no quarter\n";
}

void NoQuarterState::Dispense()
{
	std::cout << "You need to pay first.\n";
}

std::string NoQuarterState::GetName()
{
	return "No Quarter State";
}

