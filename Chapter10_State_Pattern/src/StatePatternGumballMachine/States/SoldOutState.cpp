#include "SoldOutState.h"

SoldOutState::SoldOutState(GumballMachine* machine)
	:m_Machine{machine}
{

}

void SoldOutState::InsertQuarter()
{
	std::cout << "there are no Gumballs!\n";
}

void SoldOutState::EjectQuarter()
{
	std::cout << "there are no Gumballs!\n";
}

void SoldOutState::TurnCrank()
{
	std::cout << "there are no Gumballs!\n";
}

void SoldOutState::Dispense()
{
	std::cout << "there are no Gumballs!\n";
}

std::string SoldOutState::GetName()
{
	return "SoldOut State";
}
