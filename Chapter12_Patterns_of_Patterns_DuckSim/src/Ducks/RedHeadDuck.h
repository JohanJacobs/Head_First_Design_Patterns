#pragma once
#include "Quackable/QuackableInterface.h"
#include "Observer/Observer.h"
#include "Observable/Observable.h"

namespace DuckSim
{
	class RedHeadDuck : public QuackableInterface
	{
	public:
		RedHeadDuck();
		void Quack()  override;


		void RegisterObserver(std::shared_ptr<Observer> observer) override;


		void NotifyObservers() override;
		std::string GetName() 
		{
			return "RubberDuck";
		}
	private:
		std::shared_ptr<Observable> m_Observable;
	};
}
