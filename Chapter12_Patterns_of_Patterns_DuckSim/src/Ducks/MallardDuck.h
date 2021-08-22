#pragma once
#include "Quackable/QuackableInterface.h"

namespace DuckSim
{
	// Mallard duck is derived from Quackable interface.

	class MallardDuck :public QuackableInterface
	{
	public:
		/* Play a quack sounds of this particular duck */
		void Quack() const override; 

	private:

	};
}
