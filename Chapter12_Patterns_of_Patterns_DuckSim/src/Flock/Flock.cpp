#include "Flock.h"

void DuckSim::Flock::Add(std::shared_ptr<QuackableInterface> quacker)
{
	m_Ducks.push_back(quacker); // add to the collection 
}

void DuckSim::Flock::Quack()
{
	for (auto duck : m_Ducks) // can use the iterator pattern here 
		duck->Quack();
}
