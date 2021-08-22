#pragma once
#include <iostream>

namespace DuckSim
{
	class Goose
	{
	public:
		/* Gooses don't quack, they Honk*/
		void Honk()
		{
			std::cout << "Honk\n";
		}
	};
}