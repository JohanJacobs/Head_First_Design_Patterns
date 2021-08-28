#pragma once
#include "Quackable/QuackableInterface.h"
#include "Observer/Observer.h"
#include "observable/Observable.h"
namespace DuckSim
{
	class DuckCall : public QuackableInterface
	{
	public:

		DuckCall();

		void Quack()  override;

		void RegisterObserver(std::shared_ptr<Observer> observer) override;

		void NotifyObservers() override;
		std::string GetName();
	private:
		std::shared_ptr<Observable> m_Observable;
	};
}
