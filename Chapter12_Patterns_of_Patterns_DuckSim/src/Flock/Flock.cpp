#include "Flock.h"

#include <iostream>

void DuckSim::Flock::Add(std::shared_ptr<QuackableInterface> quacker)
{
	m_Ducks.push_back(quacker); // add to the collection 
}

void DuckSim::Flock::Quack()
{
	for (auto duck : m_Ducks) // can use the iterator pattern here 
		duck->Quack();
}

void DuckSim::Flock::RegisterObserver(std::shared_ptr<Observer> observer)
{
	std::cout << "not implemented: Flock::RegisterObserver(std::shared_ptr<Observer> observer)\n";
}

void DuckSim::Flock::NotifyObservers()
{
	std::cout << "not implemented: Flock::NotifyObservers()\n";
}

std::string DuckSim::Flock::GetName()
{
	return "Flock";
}
