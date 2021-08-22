
#include <iostream>

#include "DuckSimulator.h"

#include "Ducks/MallardDuck.h"
#include "Ducks/ReadHeadDuck.h"
#include "Ducks/MallardDuck.h"
#include "Ducks/DuckCall.h"
#include "Ducks/RubberDuck.h"

// adaptor for goose 
#include "Goose/Goose.h"
#include "GooseAdapter/GooseAdapter.h"

//quack counter 
#include "Quackcounter/QuackCounter.h"

DuckSim::DuckSimulator::DuckSimulator()
{
	Simulate();
}

DuckSim::DuckSimulator::~DuckSimulator()
{

}

void DuckSim::DuckSimulator::Simulate()
{
	/* create all the ducks */
	std::shared_ptr<QuackableInterface> mallardDuck  = std::make_shared<QuackCounter>(std::make_shared<MallardDuck>());
	std::shared_ptr<QuackableInterface> readHeadDuck = std::make_shared<QuackCounter>(std::make_shared<RedHeadDuck>());
	std::shared_ptr<QuackableInterface> duckCall     = std::make_shared<QuackCounter>(std::make_shared<DuckCall>());
	std::shared_ptr<QuackableInterface> rubberDuck   = std::make_shared<QuackCounter>(std::make_shared<RubberDuck>());
	std::cout << "\nDuck Simulator\n";

	/* pass each duck to the simulate function */
	Simulate(mallardDuck);
	Simulate(readHeadDuck);
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

