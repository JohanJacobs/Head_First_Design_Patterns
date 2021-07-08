#include "PizzaStore.h"
#include "PizzaStores.h"

/* simple static class factor */
std::shared_ptr<PizzaStore> PizzaStore::CreatePizzaStore(PizzaStoreLocations store)
{	    
    switch (store)
    {
    case PizzaStoreLocations::NewYork:
        return std::make_shared<NYPizzaStore>();
        break;
    case PizzaStoreLocations::Chicago:
        return std::make_shared<ChicagoPizzaStore>();        
        break;
    }

    // no invalid option
    __debugbreak();
    return nullptr;    
}
