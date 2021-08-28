#include "DuckCall.h"
#include <iostream>

DuckSim::DuckCall::DuckCall()
{
	m_Observable = std::make_shared<Observable>(this);
}

void DuckSim::DuckCall::Quack() 
{
	std::cout << "Kwak\n";
	NotifyObservers();
}

void DuckSim::DuckCall::RegisterObserver(std::shared_ptr<Observer> observer)
{
	m_Observable->RegisterObserver(observer);
}

void DuckSim::DuckCall::NotifyObservers()
{
	m_Observable->NotifyObservers();
}

std::string DuckSim::DuckCall::GetName()
{
	return "RubberDuck";
}
