#include "RedHeadDuck.h"
#include <iostream>

DuckSim::RedHeadDuck::RedHeadDuck()
{
	m_Observable = std::make_shared<Observable>(this);
}

void DuckSim::RedHeadDuck::Quack() 
{
	std::cout << "Quack\n";
	NotifyObservers();
}

void DuckSim::RedHeadDuck::RegisterObserver(std::shared_ptr<Observer> observer)
{
	m_Observable->RegisterObserver(observer);
}

void DuckSim::RedHeadDuck::NotifyObservers()
{
	m_Observable->NotifyObservers();
}
