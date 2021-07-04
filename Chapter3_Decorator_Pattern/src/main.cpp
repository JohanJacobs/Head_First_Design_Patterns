#include <iostream>

#include "Blends.h"
#include "Condiments.h"
/*
	Decorator Pattern: Attach Additional responsibilities to an object dynamically. Decorators provide a flexible alternative to subclassing for extending functionality
	Things to node:
	- Can add a lot of small classes.
	- Type Specific when working with decorators!
	- Can increase complexity of code
	- Have to instantiate and wrap each component.


	! Don't like the naked pointers but building this as an example.
*/



int main()
{
	std::cout << "Hello Head First Design Patterns!\n";
	std::cout << "Chapter 3 - Decorator Pattern!\n";
	
	Beverage* beverage = new Espresso; // instantiate plain espresso 
	std::cout << beverage->GetDescription() << ": $ " << beverage->GetCost() << "\n";
	delete(beverage);// remember to delete 

	Beverage* beverage2 = new DarkRoast; 
	beverage2 = new Mocha(beverage2); // instantiate and wrap the condiments (decorators), ownership of the pointer goes to Mocha.
	beverage2 = new Mocha(beverage2); // instantiate and wrap the condiments (decorators)
	beverage2 = new Whip(beverage2);  // instantiate and wrap the condiments (decorators)
	std::cout << beverage2->GetDescription() << ": $ " << beverage2->GetCost() << "\n";
	delete(beverage2); // remember to delete 

	Beverage* beverage3 = new(HouseBlend);
	beverage3 = new Soy(beverage3);
	beverage3 = new Mocha(beverage3);
	beverage3 = new Whip(beverage3);
	std::cout << beverage3->GetDescription() << ": $ " << beverage3->GetCost() << "\n";
	delete(beverage3);// remember to delete 
}