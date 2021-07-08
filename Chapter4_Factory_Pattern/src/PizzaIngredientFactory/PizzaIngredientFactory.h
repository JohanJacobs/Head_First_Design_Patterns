#pragma once
#include <memory>
#include <vector>
#include "Ingredients.h"

/* abstract factory  interface */
class PizzaIngredientFactory
{
public:
    virtual Dough* CreateDough() = 0;
    virtual Sauce* CreateSauce() = 0;
    virtual std::vector<Veggies*> CreateVeggies() = 0;
    virtual Cheese* CreateCheese() = 0;
    virtual Pepperoni* CreatePepperoni() = 0;
    virtual Clams* CreateClam() = 0;
};

/* concrete classes for the ingredient factories */
class NyPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
    Dough* CreateDough() override 
    {
        return new ThinCrustDough;
    }
    Sauce* CreateSauce()override
    {
        return new MarinaraSauce;
    }
    Cheese* CreateCheese() override
    {
        return new ReggianoCheese;
    }
    std::vector<Veggies*> CreateVeggies() override
    {
        return { new Garlic, new Onion, new Mushroom, new RedPepper };
    }
    Pepperoni* CreatePepperoni() override
    {
        return new SlicedPepperoni;
    }

    Clams* CreateClam() override
    {
        return new FreshClams;
    }
};



class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
	Dough* CreateDough() override
	{
		return new ThickCrustDough;
	}
	Sauce* CreateSauce()override
	{
		return new PlumTomatoSauce;
	}
	Cheese* CreateCheese() override
	{
		return new MozzarellaCheese;
	}
	std::vector<Veggies*> CreateVeggies() override
	{
        return { new Eggplant, new Spinach, new BlackOlives, new RedPepper };
	}
	Pepperoni* CreatePepperoni() override
	{
		return new SlicedPepperoni;
	}

	Clams* CreateClam() override
	{
		return new FrozenClams;
	}
};