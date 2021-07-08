#pragma once

#include "PizzaStore.h"
#include "Pizza/Pizza.h"
#include "Pizza/Pizzas.h"
#include "PizzaIngredientFactory/PizzaIngredientFactory.h"
#include <memory>


/* Concrete classes for the various pizza stores */
class NYPizzaStore:public PizzaStore
{
public:
    NYPizzaStore() = default;
    ~NYPizzaStore() = default;
public:
    Pizza* CreatePizza(const std::string& type) override
	{
        std::shared_ptr<PizzaIngredientFactory> factory = std::make_shared<NyPizzaIngredientFactory>();
		if (type.compare("cheese") == 0)
			return new CheesePizza(factory);
		else if (type.compare("veggie") == 0)
			return new VeggiePizza(factory);
		else if (type.compare("clam") == 0)
			return new ClamPizza(factory);
		else if (type.compare("pepperoni"))
			return new PepperoniPizza(factory);

		std::cout << "No valid pizza supplied! \n";
		__debugbreak();
		return nullptr;
	}

};

class ChicagoPizzaStore:public PizzaStore
{
public:
    ChicagoPizzaStore() = default;
    ~ChicagoPizzaStore() = default;
public:
    Pizza* CreatePizza(const std::string& type) override 
    {
        std::shared_ptr<PizzaIngredientFactory> factory = std::make_shared<ChicagoPizzaIngredientFactory>();
		if (type.compare("cheese") == 0)
			return new CheesePizza(factory);
		else if (type.compare("veggie") == 0)
			return new VeggiePizza(factory);
		else if (type.compare("clam") == 0)
			return new ClamPizza(factory);
		else if (type.compare("pepperoni"))
			return new PepperoniPizza(factory);

        std::cout << "No valid pizza supplied! \n";
        __debugbreak();            
        return nullptr;
    }
};
