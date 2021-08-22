#pragma once
#include "Quackable/QuackableInterface.h"
namespace DuckSim
{
	class DuckCall : public QuackableInterface
	{
	public:


		void Quack() const override;

	private:
	};
}
