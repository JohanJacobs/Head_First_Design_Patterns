#pragma once
#include <iostream>

namespace AbstractCoffeeAndTeaWithHook
{
    class CaffeineBeverageWithHook
    {
    public:
        void prepareRecipe()
        {            
            // algorithm form making a caffienated drink
            boilWater();
            brew();
            pourInCup();
            if (customerWantsCondiments())
                addCondiments();
        }
    private:
        virtual bool customerWantsCondiments(){return true;}
        void boilWater() {std::cout << "Boiling Water\n";}
        virtual void brew() = 0; // should be overriden by derived class to provide the specific implementation for the derived class
        void pourInCup() {std::cout << "Pouring into cup\n";}
        virtual void addCondiments()= 0;// should be overriden by derived class to provide the specific implementation for the derived class    
    };

    // specific implementations for TEA and COFFEE overriding the specific steps of brew and addCondiments as their implementaitons are different in the general algorithm
    class TeaWithHook: public CaffeineBeverageWithHook
    {
        private:
            void brew()          override { std::cout << "Steeping the tea\n";}
            void addCondiments() override {std::cout << "Adding Lemon\n";}
            bool customerWantsCondiments() override 
            {
                std::cout << "Would you like lemon with your tea? (y/n): ";
                char result;
                std::cin >> result;
                if (result == 'y')
                    return true;

                return false;
            }
    };

    class CoffeeWithHook: public CaffeineBeverageWithHook
    {
        private:
            void brew()          override { std::cout << "Dripping Coffee through filter\n";}
            void addCondiments() override {std::cout << "Adding Sugar and Milk\n";}
            bool customerWantsCondiments() override
            {
                std::cout << "Would you like sugar and Milk with your Coffee? (y/n): ";
                char result;
                std::cin >> result;
                if (result == 'y')
                    return true;

                return false;
            }
    };
}