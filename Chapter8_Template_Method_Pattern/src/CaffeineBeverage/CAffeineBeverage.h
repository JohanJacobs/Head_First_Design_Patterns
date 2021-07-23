#pragma once
 

 namespace AbstractCoffeeAndTea
 {
    class CaffeineBeverage
    {
    public:
        void prepareRecipe()
        {
            // algorithm form making a caffienated drink
            boilWater();
            brew();
            pourInCup();
            addCondiments();
        }
    private:
        void boilWater {std::cout << "Boiling Water\n";}
        virtual void brew() = 0; // should be overriden by derived class to provide the specific implementation for the derived class
        void pourInCup() {std::cout << "Pouring into cup\n";}        
        virtual void addCondiments()= 0;// should be overriden by derived class to provide the specific implementation for the derived class    
    };

    // specific implementations for TEA and COFFEE overriding the specific steps of brew and addCondiments as their implementaitons are different in the general algorithm
    class Tea: public CaffeineBeverage
    {
        private::
            void brew()          override { std::cout << "Steeping the tea\n";}
            void addCondiments() override {std::cout << "Adding Lemon\n";}        
    };

    class Coffee: public CaffeineBeverage
    {
        private:
            void brew()          override { std::cout << "Dripping Coffee through filter\n";}
            void addCondiments() override {std::cout << "Adding Sugar and Milk\n";}        
    };
 }