#pragma once 

#include "FlyBehavior.h"
#include "QuackBehavior.h"


/*
    Duck super class (Base class)
    Duck class will manage all the pointers and delete them when needed.therefore ownership of all pointers rests with Duck.
*/
class Duck
{
protected:
    FlyBehavior* m_Fly;
    QuackBehavior* m_Quack;

public:        
    void SetFlyBehavior(FlyBehavior* flyBehavior)
    {
        // check if m_fly has data and delete it to avoid memory leaks 
        if (m_Fly != nullptr)
            delete(m_Fly);
        m_Fly = flyBehavior;
    }
    void SetQuackBehavior(QuackBehavior* quackBehavior)
    {
        // check if m_fly has data and delete it to avoid memory leaks 
        if (m_Quack != nullptr)
            delete(m_Quack);

        m_Quack = quackBehavior; // assign new behavior
    }
    void Display()
    {

    }

    void PerformFly()
    {
        m_Fly->fly();
    }
    void PerformQuack()
    {
        m_Quack->quack();
    }
    void Swim()
    {
        std::cout << " All ducks float, even decoys!\n";
    }
    ~Duck()
    {
        delete(m_Quack);
        delete(m_Fly);
    }
};


class MallardDuck:public Duck
{
public:
    MallardDuck()
    {
        m_Quack = new (Quack);        
        m_Fly = new(FlyWithWings);
    }
};

class ModelDuck: public Duck
{
public:
    ModelDuck()
    {        
        m_Fly = new(FlyNoWay);
        m_Quack = new(MuteQuack);
    }
};