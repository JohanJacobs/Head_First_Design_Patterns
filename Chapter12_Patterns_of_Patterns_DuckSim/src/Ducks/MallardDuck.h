#pragma once
#include "Quackable/QuackableInterface.h"
#include "Observable/Observable.h"
#include "Observer/Observer.h"
namespace DuckSim
{
	// Mallard duck is derived from Quackable interface.

	class MallardDuck :public QuackableInterface
	{
	public:
		MallardDuck();
		/* Play a quack sounds of this particular duck */
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
