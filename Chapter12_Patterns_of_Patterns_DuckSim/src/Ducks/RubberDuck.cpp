#include "RubberDuck.h"
#include <iostream>

DuckSim::RubberDuck::RubberDuck()
{
	m_Observable = std::make_shared<Observable>(this);
}

void DuckSim::RubberDuck::Quack() 
{
	std::cout << "Squeak\n";
	NotifyObservers();
}

void DuckSim::RubberDuck::RegisterObserver(std::shared_ptr<Observer> observer)
{
	m_Observable->RegisterObserver(observer);
}

void DuckSim::RubberDuck::NotifyObservers()
{
	m_Observable->NotifyObservers();
}

std::string DuckSim::RubberDuck::GetName() 
{
	return "RubberDuck";
}
