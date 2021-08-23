#pragma once
#include "DuckAbstractFactoryInterface/DuckAbstractFactoryInterface.h"
#include "DuckAbstractFactory/DuckAbstractFactory.h"

namespace DuckSim
{
	class CountingDuckAbstractFactory :public DuckAbstractFactoryInterface
	{
	public:

		std::shared_ptr<QuackableInterface> CreateMallardDuck() override;

		std::shared_ptr<QuackableInterface> CreateRedHeadDuck() override;

		std::shared_ptr<QuackableInterface> CreateDuckCall() override;

		std::shared_ptr<QuackableInterface> CreateRubberDuck() override;

	private:
		DuckAbstractFactory m_DuckFactory;
	};
}