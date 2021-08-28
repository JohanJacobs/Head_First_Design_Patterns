#include "GooseAdapter.h"

void DuckSim::GooseAdapter::Quack() 
{
	m_Goose->Honk();
	NotifyObservers();
}

void DuckSim::GooseAdapter::RegisterObserver(std::shared_ptr<Observer> observer)
{
	m_Observable->RegisterObserver(observer);
}

void DuckSim::GooseAdapter::NotifyObservers()
{
	m_Observable->NotifyObservers();
}

std::string DuckSim::GooseAdapter::GetName()
{
	return "Goose Adapter";
}

