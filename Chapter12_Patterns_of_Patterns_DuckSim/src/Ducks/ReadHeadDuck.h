#pragma once
#include "Quackable/QuackableInterface.h"
namespace DuckSim
{
	class RedHeadDuck : public QuackableInterface
	{
	public:

		void Quack() const override;

	private:
	};
}
