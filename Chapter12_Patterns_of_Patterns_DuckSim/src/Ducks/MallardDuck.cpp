#include <iostream>
#include "MallardDuck.h"

DuckSim::MallardDuck::MallardDuck()
{
	m_Observable = std::make_shared<Observable>(this);
}

void DuckSim::MallardDuck::Quack() 
{
	std::cout << "Quack\n";
	NotifyObservers();
}

void DuckSim::MallardDuck::RegisterObserver(std::shared_ptr<Observer> observer)
{
	m_Observable->RegisterObserver(observer);
}

void DuckSim::MallardDuck::NotifyObservers()
{
	m_Observable->NotifyObservers();
}
