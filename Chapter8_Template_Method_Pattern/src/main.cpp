#include <iostream>
#include "CaffeineBeverageWithHook/CaffeineBeverageWithHook.h"

void BeverageTestDrive()
{
    auto teaHook = AbstractCoffeeAndTeaWithHook::TeaWithHook();
    auto coffeeHook = AbstractCoffeeAndTeaWithHook::CoffeeWithHook();

    teaHook.prepareRecipe();
    coffeeHook.prepareRecipe();
}

int main ()
{
    std::cout << "Hello Head First Design Patterns!\n";
	std::cout << "Chapter 8 - Tempalte Method Pattern!\n";
      
    //  Beverageclass with hook  
    BeverageTestDrive();   

    std::cout << "Done.\n";
}