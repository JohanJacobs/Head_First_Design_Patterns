
#include <iostream>

#include "DuckSimulator.h"


// adapter for goose 
#include "Goose/Goose.h"
#include "GooseAdapter/GooseAdapter.h"

// Counting Quacks
#include "QuackCounter/QuackCounter.h"

// factory 
#include "CountingDuckAbstractFactory/CountingDuckAbstractFactory.h"

DuckSim::DuckSimulator::DuckSimulator()
{
	auto factory = std::make_shared<CountingDuckAbstractFactory>();
	Simulate(factory);
}

DuckSim::DuckSimulator::~DuckSimulator()
{

}

void DuckSim::DuckSimulator::Simulate(std::shared_ptr<DuckAbstractFactoryInterface> factory)
{
	/* create all the ducks with a factory*/
	DuckAbstractFactory duckFactory;
	std::shared_ptr<QuackableInterface> mallardDuck  = factory->CreateMallardDuck();
	std::shared_ptr<QuackableInterface> redHeadDuck = factory->CreateRedHeadDuck();
	std::shared_ptr<QuackableInterface> duckCall     = factory->CreateDuckCall();
	std::shared_ptr<QuackableInterface> rubberDuck = factory->CreateRubberDuck();
	std::cout << "\nDuck Simulator with Abstract Factory\n";

	/* pass each duck to the simulate function */
	Simulate(mallardDuck);
	Simulate(redHeadDuck);
	Simulate(duckCall);
	Simulate(rubberDuck);


	// create a goose and a goose adapter so that the goose can work just like a duck
	std::shared_ptr<Goose> goose = std::make_shared<Goose>();
	std::shared_ptr<GooseAdapter> gooseAdapter = std::make_shared<GooseAdapter>(goose);
	Simulate(gooseAdapter);


	std::cout << "The ducks quacked " << QuackCounter::GetQuacks() << " times\n";
}

/*
	because each duck inherits from Quackable, the function don't need to have each specific param defined for each class. 
*/

void DuckSim::DuckSimulator::Simulate(std::shared_ptr<QuackableInterface> duck)
{
	duck->Quack(); // call the quack command
}


