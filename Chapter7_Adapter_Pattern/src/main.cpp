#include <iostream>
#include <memory> 

#include "Duck/DuckInterface.h"
#include "Duck/MallardDuck.h"

#include "Turkey/WildTurkey.h"
#include "TurkeyAdapter/TurkeyAdapter.h"

void TestDuck(std::shared_ptr<DuckInterface> duck)
{
    duck->Fly();
    duck->Quack();
}

void DuckTestDrive()
{
    std::shared_ptr<MallardDuck> mallardDuck = std::make_shared<MallardDuck>();
    std::shared_ptr<WildTurkey> wildTurkey = std::make_shared<WildTurkey>();
    std::shared_ptr<TurkeyAdapter> turkeyAdapter = std::make_shared<TurkeyAdapter>(wildTurkey); // pass wildTurkey as adaptee

    std::cout << "\nThe Turkey Says\n";
    wildTurkey->Gobble();
    wildTurkey->Fly();

    std::cout << "\nThe Mallard Duck says\n";
    TestDuck(mallardDuck);

    std::cout << "\nThe TurkeyAdapter says \n";
    TestDuck(turkeyAdapter);
}


int main ()
{
    std::cout << "Hello Head First Design Patterns!\n";
	std::cout << "Chapter 7 - Adapter Pattern!\n";

    DuckTestDrive();
}