#pragma once
#include <iostream>

namespace Original
{    
    class Coffee
    {
    public:
        void prepareRecipe()
        {
            boilWater();
            brewCoffeeGrinds();
            pourInCup();
            addSugarAndMilk();
        }
        void boilWater()        { std::cout << "Boiling water\n";} 
        void brewCoffeeGrinds() { std::cout << "Dripping coffee through filter\n";}
        void pourInCup()        { std::cout << "Pouring into cup\n";}
        void addSugarAndMilk()  { std::cout << "Adding Sugar and Milk\n";}
    };
}