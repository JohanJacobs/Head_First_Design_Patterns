#pragma once
#include "core/base.h"

#include "DefaultGumballMachine.h"

namespace StatePattern
{
	namespace DefaultImplementation
	{
		class DefaultGumballMachineTestDrive
		{
		public:
			DefaultGumballMachineTestDrive()
			{
				GumballMachine gumballMachine(5);
				std::cout << "Testing Gumball Machine: \n";
				
				gumballMachine.PrintState();

				gumballMachine.InsertQuarter();
				gumballMachine.TurnCrank();
				
				gumballMachine.PrintState();

				gumballMachine.InsertQuarter();
				gumballMachine.EjectQuarter();
				gumballMachine.TurnCrank();

				gumballMachine.PrintState();

				gumballMachine.InsertQuarter();
				gumballMachine.TurnCrank();
				gumballMachine.InsertQuarter();
				gumballMachine.TurnCrank();
				gumballMachine.EjectQuarter();

				gumballMachine.PrintState();

				gumballMachine.InsertQuarter();
				gumballMachine.InsertQuarter();
				gumballMachine.TurnCrank();
				gumballMachine.InsertQuarter();
				gumballMachine.TurnCrank();
				gumballMachine.InsertQuarter();
				gumballMachine.TurnCrank();

				gumballMachine.PrintState();
			}
		};
	}
}