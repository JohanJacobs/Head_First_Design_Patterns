#pragma once 
#include <iostream>

// pure abstract base class for flying behaviors
class FlyBehavior
{
public:
    virtual void fly() const = 0;    
};

/*
    Different Flying behaviors that are available.
*/

class FlyWithWings:public FlyBehavior
{
public:
    void fly()const override
    {
        std::cout << " I'm flying!!\n";
    }
};


class FlyNoWay:public FlyBehavior
{
public:
    void fly() const override
    {
        std::cout << " I can't fly\n";
    }
};


class FlyRocketPowered: public FlyBehavior
{
public:
    void fly() const override 
    {
        std::cout << " I'm flying with a rocket!\n";
    }
};
