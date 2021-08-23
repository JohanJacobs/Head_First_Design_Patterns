#pragma once
#include <memory>
#include "Quackable/QuackableInterface.h"

namespace DuckSim
{
	/*
		abstract factory allows for creation objects 
	*/
	class DuckAbstractFactoryInterface
	{
	public:
		virtual std::shared_ptr<QuackableInterface> CreateMallardDuck() = 0;
		virtual std::shared_ptr<QuackableInterface> CreateRedHeadDuck() = 0;
		virtual std::shared_ptr<QuackableInterface> CreateDuckCall() = 0;
		virtual std::shared_ptr<QuackableInterface> CreateRubberDuck() = 0;

	private:
	};
}