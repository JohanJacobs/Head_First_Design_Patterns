#include <iostream>
#include "core/base.h"

// Default Gumball machine 
#include "DefaultGumballMachine/DefaultGumballMachineTestDrive.h"

int main()
{
	std::cout << "Hello Head First Design Patterns!\n";
	std::cout << "Chapter 10 - State Pattern!\n"; 

	StatePattern::DefaultImplementation::DefaultGumballMachineTestDrive td;
}
