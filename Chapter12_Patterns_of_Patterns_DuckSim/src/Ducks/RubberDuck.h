#pragma once
#include "Quackable/QuackableInterface.h"

namespace DuckSim
{
	class RubberDuck :public QuackableInterface
	{
	public:

		void Quack() const override;

	private:

	};
}