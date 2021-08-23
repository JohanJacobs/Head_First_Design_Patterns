#pragma once
#include <memory>
#include "Quackable/QuackableInterface.h"
#include "DuckAbstractFactoryInterface/DuckAbstractFactoryInterface.h"
namespace DuckSim
{
	class DuckSimulator
	{
	public:
		DuckSimulator();
		~DuckSimulator();
		void Simulate(std::shared_ptr<DuckAbstractFactoryInterface> factory);
	private:
		void Simulate(std::shared_ptr<QuackableInterface> duck);
	};
}
