#include <iostream>
#include <memory>
#include "GumballMachine/GumballMachine.h"

int main()
{
	std::cout << "State Test drive \n";
	std::shared_ptr<GumballMachine> m = std::make_shared<GumballMachine>(2);
	m->SetupStates();

	m->PrintState();

	m->InsertQuarter();
	m->TurnCrank();

	m->PrintState();

	m->InsertQuarter();
	m->TurnCrank();
	m->InsertQuarter();
	m->TurnCrank();

	m->PrintState();
}