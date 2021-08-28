#include "QuackCounter.h"
#include <iostream>
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

void DuckSim::QuackCounter::RegisterObserver(std::shared_ptr<Observer> observer)
{
	m_Duck->RegisterObserver(observer);
	//std::cout << "Not Implemented: QuackCounter::RegisterObserver(std::shared_ptr<Observer> observer)\n";
}

void DuckSim::QuackCounter::NotifyObservers()
{
	m_Duck->NotifyObservers();
	//std::cout << "Not Implemented: QuackCounter::NotifyObservers()\n";
}

std::string DuckSim::QuackCounter::GetName() 
{
	return m_Duck->GetName();
}

DuckSim::QuackCounter::QuackCounter(std::shared_ptr<QuackableInterface> duck)
	: m_Duck{ duck }
{

}
