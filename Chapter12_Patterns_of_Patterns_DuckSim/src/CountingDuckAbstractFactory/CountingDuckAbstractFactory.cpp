#include "CountingDuckAbstractFactory.h"
#include "Quackcounter/QuackCounter.h"

std::shared_ptr<DuckSim::QuackableInterface> DuckSim::CountingDuckAbstractFactory::CreateMallardDuck()
{
	return std::make_shared<QuackCounter>(m_DuckFactory.CreateMallardDuck());
}

std::shared_ptr<DuckSim::QuackableInterface> DuckSim::CountingDuckAbstractFactory::CreateRedHeadDuck()
{
	return std::make_shared<QuackCounter>(m_DuckFactory.CreateRedHeadDuck());
}

std::shared_ptr<DuckSim::QuackableInterface> DuckSim::CountingDuckAbstractFactory::CreateDuckCall()
{
	return std::make_shared<QuackCounter>(m_DuckFactory.CreateDuckCall());
}

std::shared_ptr<DuckSim::QuackableInterface> DuckSim::CountingDuckAbstractFactory::CreateRubberDuck()
{
	return std::make_shared<QuackCounter>(m_DuckFactory.CreateRubberDuck());
}

