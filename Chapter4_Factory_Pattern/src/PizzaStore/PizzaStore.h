#pragma once
#include <memory>
#include "Pizza/Pizza.h"


/* Identify the shop with this enum class */
enum class PizzaStoreLocations
{
    NewYork,
    Chicago
};


/* Interface for hte pizza stores */
class PizzaStore
{
public:
    virtual ~PizzaStore() = default;
public:
    Pizza* OrderPizza(std::string type)
    {
        Pizza* pizza = CreatePizza(type);
        pizza->Prepare();
        pizza->Bake();
        pizza->Cut();
        pizza->Box();
        return pizza;
    }

    // static abstract factory to create the pizzaStores 
    static std::shared_ptr<PizzaStore> CreatePizzaStore(PizzaStoreLocations store);
public:
    virtual Pizza* CreatePizza(const std::string& type) = 0;
};