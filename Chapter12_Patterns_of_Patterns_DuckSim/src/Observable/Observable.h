#pragma once
#include <vector>
#include <memory>

#include "QuackObservable/QuackObservable.h"
#include "Observer/Observer.h"

namespace DuckSim
{	
	class Observable: public QuackObservable
	{
	public:
		Observable(QuackObservable *duck)
			: m_Duck{duck}
		{

		}

		void RegisterObserver(std::shared_ptr<Observer> observer) override
		{
			m_Observers.push_back(observer);
		}


		void NotifyObservers() override
		{
			for (auto& observer : m_Observers)
			{
				observer->Update(m_Duck);
			}
		}


		std::string GetName() override
		{
			return m_Duck->GetName();
		}

	private:
		std::vector<std::shared_ptr<Observer>> m_Observers;
		QuackObservable* m_Duck;
	};
}