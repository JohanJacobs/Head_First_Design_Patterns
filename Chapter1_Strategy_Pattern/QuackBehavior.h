#pragma once 
#include <iostream>

// pure virtual class for QuackBehavior
class QuackBehavior
{
public:
    virtual void quack() const = 0;
    virtual ~QuackBehavior() =  default;
};


/*
    concrete implementations of the the differnt Quack Behaviors
*/

class Quack:public QuackBehavior
{
public:
    void quack() const override 
    {
        std::cout << " Quack\n";
    }
};

class MuteQuack:public QuackBehavior
{
public:
    void quack() const override
    {
        std::cout << " << Silence >>\n";
    }
};

class SqueekQuack: public QuackBehavior
{
public:
    void quack() const override
    {
        std::cout << " Squeak!\n";
    }
};