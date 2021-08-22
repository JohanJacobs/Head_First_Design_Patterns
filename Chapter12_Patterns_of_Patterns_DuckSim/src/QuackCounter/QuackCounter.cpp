#include "QuackCounter.h"

// used for counting the quacks
uint32_t DuckSim::QuackCounter::m_QuackCounter = 0;


/* call the quack behavior and increase the counters */
void DuckSim::QuackCounter::Quack() 
{
	m_Duck->Quack(); 
	m_QuackCounter += 1;
}

/* returns the amount of quacks recorded */
uint32_t DuckSim::QuackCounter::GetQuacks()
{
	return m_QuackCounter;
}

DuckSim::QuackCounter::QuackCounter(std::shared_ptr<QuackableInterface> duck)
	: m_Duck{ duck }
{

}
