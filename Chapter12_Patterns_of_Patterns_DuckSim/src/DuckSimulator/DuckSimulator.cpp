#include <iostream>

#include "DuckSimulator.h"
// Composite pattern for flocks
#include "Flock/Flock.h"
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
	std::shared_ptr<QuackableInterface> redHeadDuck  = factory->CreateRedHeadDuck();
	std::shared_ptr<QuackableInterface> duckCall     = factory->CreateDuckCall();
	std::shared_ptr<QuackableInterface> rubberDuck   = factory->CreateRubberDuck();
	
	std::shared_ptr<Goose> goose = std::make_shared<Goose>();
	std::shared_ptr<GooseAdapter> gooseAdapter = std::make_shared<GooseAdapter>(goose);
	

	std::cout << "\n\nDuck Simulator with Composite - Flocks\n";

	// normal flock of ducks.
	std::shared_ptr<Flock> flockOfDucks = std::make_shared<Flock>();
	flockOfDucks->Add(mallardDuck);
	flockOfDucks->Add(redHeadDuck);
	flockOfDucks->Add(duckCall);
	flockOfDucks->Add(rubberDuck);
	flockOfDucks->Add(gooseAdapter);

	// Create a flock of independent mallard ducks 
	std::shared_ptr<Flock> flockOfMallardDucks = std::make_shared<Flock>();
	flockOfMallardDucks->Add(factory->CreateMallardDuck());
	flockOfMallardDucks->Add(factory->CreateMallardDuck());
	flockOfMallardDucks->Add(factory->CreateMallardDuck());
	flockOfMallardDucks->Add(factory->CreateMallardDuck());

	// Add a collection to the composite pattern
	flockOfDucks->Add(flockOfMallardDucks); 


	std::cout << "\nDuck Simulator: Whole flock Simulation\n";
	Simulate(flockOfDucks);

	std::cout << "\nDuck Simulator: Mallard flock Simulation\n";
	Simulate(flockOfMallardDucks);


	std::cout << "\n\nThe ducks quacked " << QuackCounter::GetQuacks() << " times\n";
}

/*
	because each duck inherits from Quackable, the function don't need to have each specific param defined for each class. 
*/

void DuckSim::DuckSimulator::Simulate(std::shared_ptr<QuackableInterface> duck)
{
	duck->Quack(); // call the quack command
}


