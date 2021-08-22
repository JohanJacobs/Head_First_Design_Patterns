#pragma once
#include <memory>
#include "Quackable/QuackableInterface.h"
#include "Goose/Goose.h"

namespace DuckSim
{
	/*
	* Goose adapter adapts the behavior of the goose to match the behavior of the Ducks. 
	* Requires a goose behavior when created. 
	*/

	class GooseAdapter:public QuackableInterface
	{
	public:
		/* Requires a goose class that will be re-shaped to match the quackable interface */
		GooseAdapter(std::shared_ptr<Goose> goose)
			:m_Goose{ goose }
		{}

		/* converting the Goose Honk to a Duck Quack*/
		void Quack() override;

	private:
		std::shared_ptr<Goose> m_Goose; // the goose object
	};
}
