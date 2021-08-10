#include <iostream>

#include "GumballMachine/GumballMachine.h"
int main()
{
	std::cout << "State Test drive \n";
	auto m = GumballMachine(2);

	m.PrintState();

	m.InsertQuarter();
	m.TurnCrank();

	m.PrintState();

	m.InsertQuarter();
	m.TurnCrank();
	m.InsertQuarter();
	m.TurnCrank();

	m.PrintState();
}