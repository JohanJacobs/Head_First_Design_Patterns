#pragma once
#include <iostream>

#include "core/base.h"

namespace StatePattern
{
	namespace DefaultImplementation
	{
		class GumballMachine
		{

		public:
			GumballMachine(int count)
				:m_Count{ count }
			{
				if (count > 0)
					m_State = NO_QUARTER;
			}

			void InsertQuarter()
			{
				if (m_State == HAS_QUARTER)
				{
					std::cout << "You can't insert another quarter\n";
				}
				else if (m_State == NO_QUARTER)
				{
					m_State = HAS_QUARTER;
					std::cout << "You inserted a quarter\n";
				}
				else if (m_State == SOLD_OUT)
				{
					std::cout << "You can't insert a quarter, the machine is sold out!\n";
				}
				else if (m_State == SOLD)
				{
					std::cout << "Please wait, we're already giving you a gumball\n";
				}
				// what if we have an invalid state and we reach this step? 
			}

			void EjectQuarter()
			{
				if (m_State == HAS_QUARTER)
				{
					std::cout << "Quarter Returned\n";
					m_State = NO_QUARTER;
				}
				else if (m_State == NO_QUARTER)
				{
					std::cout << "You haven't inserted a quarter\n";
				}
				else if (m_State == SOLD)
				{
					std::cout << "Sorry, you already turned the crank\n";
				}
				else if (m_State == SOLD_OUT)
				{
					std::cout << "you can't eject, you haven't inserted a quarter yet\n";
				}
			}

			void TurnCrank()
			{
				if (m_State == SOLD)
				{
					std::cout << "Turning twice doesn't get you another gumball!\n";					
				}
				else if (m_State == NO_QUARTER)
				{
					std::cout << "You turned but there's no quarter\n";
				}
				else if (m_State == HAS_QUARTER)
				{
					std::cout << "You turned...\n";
					m_State = SOLD;
					Dispense();
				}
			}

			void Dispense()
			{
				if (m_State == SOLD)
				{
					std::cout << "A gumball comes rolling out the slot.\n";
					m_Count -= 1;
					if (m_Count == 0)
					{
						std::cout << "Oops, out of gumballs!";
					}
					else
					{ 
						m_State = NO_QUARTER;
					}

				}
				else if (m_State == NO_QUARTER)
				{
					std::cout << "You need  to pay first\n";
				}
				else if (m_State == SOLD_OUT)
				{
					std::cout << "No gumball dispensed\n";
				}
				else if (m_State == HAS_QUARTER)
				{
					std::cout << "No gumball dispensed";
				}
				// other methods like ToString and refill
			}

			void PrintState()
			{
				std::cout << "\nStanding Gumball Model #2004\n";
				std::cout << "Inventory: " << m_Count << " gumballs\n";
				
				if (m_State == SOLD_OUT)
				{
					std::cout << "Machine is SOLD OUT\n";
				}
				if (m_State == NO_QUARTER)
				{
					std::cout << "Machine is WAITING for a QUARTER \n";
				}
				if (m_State == HAS_QUARTER)
				{
					std::cout << "Machine is HAS a QUARTER \n";
				}
				if (m_State == SOLD)
				{
					std::cout << "Machine is HAS a QUARTER \n";
				}
			}
		public:
			const static int SOLD_OUT{ 0 };
			const static int NO_QUARTER{ 1 };
			const static int HAS_QUARTER{ 2 };
			const static int SOLD{ 3 };

		private:
			int m_State{ SOLD_OUT };
			int m_Count{ 0 };

		};

	}
}
