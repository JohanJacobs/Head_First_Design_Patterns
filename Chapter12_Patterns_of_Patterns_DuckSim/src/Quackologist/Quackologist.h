#pragma once
#include <memory>
#include <iostream>

#include "Observer/Observer.h"

namespace DuckSim
{
	class Quackologist : public Observer
	{
	public:

		void Update(QuackObservable* duck) override
		{
			std::cout << " Quackologist: " << duck->GetName() << " just Quacked!\n";
		}

	private:
	};

}
