#pragma once
#include <memory>
#include "Quackable/QuackableInterface.h"

namespace DuckSim
{
	class DuckSimulator
	{
	public:
		DuckSimulator();
		~DuckSimulator();
		void Simulate();
	private:
		void Simulate(std::shared_ptr<QuackableInterface> duck);
	};
}
