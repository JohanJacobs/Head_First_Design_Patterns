#pragma once
namespace DuckSim
{
	// Quackable interface for all ducks to be derived from.
	// allows to pass different ducks around the simulator.

	class QuackableInterface
	{
	public:
		/* Play a quack sounds of this particular duck */
		virtual void Quack()  = 0;
		virtual ~QuackableInterface() {}
	private:
	};
}
