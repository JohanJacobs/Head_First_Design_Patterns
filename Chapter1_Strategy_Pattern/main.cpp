#include <iostream>
#include "Duck.h"
#include "FlyBehavior.h"
#include "QuackBehavior.h"

int main()
{
    std::cout << "Hello Head First Design Patterns!\n";

    std::cout << "\n\nMallard Duck: \n";
    Duck *mallard = new(MallardDuck);
    mallard->PerformQuack();
    mallard->PerformFly();
    delete (mallard);

    std::cout << "\n\nModel Duck:\n";
    // make new dynamic duck
    Duck* model = new (ModelDuck);
    model->PerformFly();
    model->SetFlyBehavior(new (FlyRocketPowered));
    model->PerformFly();
    delete(model);

}