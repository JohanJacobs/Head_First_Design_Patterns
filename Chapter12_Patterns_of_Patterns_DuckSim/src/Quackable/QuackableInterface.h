#pragma once
namespace DuckSim
{
	// Quackable interface for all ducks to be derived from.
	// allows to pass different ducks around the simulator.

	class QuackableInterface
	{
	public:
		virtual void Quack() const = 0;
		virtual ~QuackableInterface() {}
	private:
	};
}
