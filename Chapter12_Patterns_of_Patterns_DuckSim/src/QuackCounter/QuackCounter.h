#pragma once
#include <memory>
#include "Quackable/QuackableInterface.h"

namespace DuckSim
{
	/*
		A decorator to add a counter to the ducks. 
		A duck class is wrapped so that the quack are counted.
		the "GetQuacks" and "m_QuackCounter" is static function to be accessible in the program and not just via a decorated  duck.
	*/
	class QuackCounter :public QuackableInterface
	{
	public:
		QuackCounter(std::shared_ptr<QuackableInterface> duck);
		void Quack() override;

		// static function to return the amount of quacks made 
		static uint32_t GetQuacks();


		void RegisterObserver(std::shared_ptr<Observer> observer) override;


		void NotifyObservers() override;


		std::string GetName() override;

	private:
		std::shared_ptr<QuackableInterface> m_Duck;
		static uint32_t m_QuackCounter;
	};
}