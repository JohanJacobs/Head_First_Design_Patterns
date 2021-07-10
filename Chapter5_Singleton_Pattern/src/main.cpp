#include <iostream>
#include "ChocolateBoiler/ChocolateBoiler.h"

/*
    Singleton Pattern ensures a class has only one instance, and provides a global point of access to it. 
*/ 

int main() 
{
    std::cout << "Hello Head First Design Patterns!\n";
	std::cout << "Chapter 5 - Singleton Pattern!\n";    

    ChocOHolic::ChocolateBoiler::GetInstance().Fill();
    ChocOHolic::ChocolateBoiler::GetInstance().Boil();
    ChocOHolic::ChocolateBoiler::GetInstance().Drain();    

}