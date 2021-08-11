#include "StateInterface.h"

void StateInterface::InsertQuarter()
{
	std::cout << "InsertQuared not Implemented!\n";
}

void StateInterface::EjectQuarter()
{
	std::cout << "EjectQuarter not Implemented!\n";
}

void StateInterface::TurnCrank()
{
	std::cout << "TurnCrank not Implemented!\n";
}

void StateInterface::Dispense()
{
	std::cout << "Dispense not Implemented!\n";
}

std::string StateInterface::GetName()
{
	return "Interface";
}

StateInterface::~StateInterface()
{

}