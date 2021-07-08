#include <iostream>
#include <string>
#include <memory>

#include "Pizza/Pizza.h"

#include "PizzaStore/PizzaStore.h"
#include "PizzaStore/PizzaStores.h"

int main()
{
	std::cout << "Hello Head First Design Patterns!\n";
	std::cout << "Chapter 4 - Factory Pattern!\n";
    
    auto nyStore = PizzaStore::CreatePizzaStore(PizzaStoreLocations::NewYork);
    auto chStore = PizzaStore::CreatePizzaStore(PizzaStoreLocations::Chicago);

    Pizza* EthanPizza = nyStore->OrderPizza("cheese");
    std::cout << ":: Ethan ordered " << EthanPizza->GetName() << std::endl;
    delete EthanPizza;
    
    Pizza* JoelPizza = chStore->OrderPizza("cheese");
    std::cout << ":: Joel ordered " << JoelPizza->GetName() << std::endl;
    delete JoelPizza;   
}