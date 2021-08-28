#pragma once
#include <memory>
#include "Quackable/QuackableInterface.h"
#include "Goose/Goose.h"
#include "Observable/Observable.h"
namespace DuckSim
{
	/*
	* Goose adapter adapts the behavior of the goose to match the behavior of the Ducks. 
	* Requires a goose behavior when created. 
	*/

	class GooseAdapter:public QuackableInterface
	{
	public:
		/* Requires a goose class that will be re-shaped to match the quackable interface */
		GooseAdapter(std::shared_ptr<Goose> goose)
			:m_Goose{ goose }
		{
			m_Observable = std::make_shared<Observable>(this);
		}

		/* converting the Goose Honk to a Duck Quack*/
		void Quack() override;


		void RegisterObserver(std::shared_ptr<Observer> observer) override;


		void NotifyObservers() override;


		std::string GetName() override;

	private:
		std::shared_ptr<Goose> m_Goose; // the goose object
		std::shared_ptr<Observable> m_Observable;
	};
}
