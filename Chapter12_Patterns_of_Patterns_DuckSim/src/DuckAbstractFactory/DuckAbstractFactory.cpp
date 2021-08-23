#include "DuckAbstractFactory.h"

#include "ducks/MallardDuck.h"
#include "ducks/RedHeadDuck.h"
#include "ducks/RubberDuck.h"
#include "ducks/DuckCall.h"


std::shared_ptr<DuckSim::QuackableInterface> DuckSim::DuckAbstractFactory::CreateMallardDuck()
{
	return std::make_shared<MallardDuck>();
}

std::shared_ptr<DuckSim::QuackableInterface> DuckSim::DuckAbstractFactory::CreateRedHeadDuck()
{
	return std::make_shared<RedHeadDuck>();
}

std::shared_ptr<DuckSim::QuackableInterface> DuckSim::DuckAbstractFactory::CreateDuckCall()
{
	return std::make_shared<DuckCall>();
}

std::shared_ptr<DuckSim::QuackableInterface> DuckSim::DuckAbstractFactory::CreateRubberDuck()
{
	return std::make_shared<RubberDuck>();
}
