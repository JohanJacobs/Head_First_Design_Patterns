#pragma once
#include <memory>
#include <vector>

#include "Quackable/QuackableInterface.h"

namespace DuckSim
{
	/* Build structures of objects in the form of trees that contain both compositions of objects and individual objects as nodes */
	class Flock: public QuackableInterface // implement same interface as the leaf node sot hat we can add it as a leaf to a node. Eg. collections of quackables.
	{
	public:
		void Add(std::shared_ptr<QuackableInterface> quacker);
		void Quack();

		void RegisterObserver(std::shared_ptr<Observer> observer) override;

		void NotifyObservers() override;


		std::string GetName() override;

	private:
		std::vector<std::shared_ptr<QuackableInterface>> m_Ducks;
	};
}