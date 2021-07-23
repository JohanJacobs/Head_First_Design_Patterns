#pragma once 
#include <iostream>

namespace Original
{
    class Tea
    {
    public:
        void prepareRecipe()
        {
            boilWater();
            steepTeaBag();
            pourInCup();
            addLemon();
        }    
        void boilWater()    { std::cout << "Boiling water\n";}
        void steepTeaBag()  { std::cout << "Steep the tea\n";}
        void pourInCup()    { std::cout << "Pouring into cup\n";}
        void addLemon()     { std::cout << "Adding Lemon\n";}
    };
}