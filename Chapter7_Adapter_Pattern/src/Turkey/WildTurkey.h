#pragma once
#include <iostream>
#include <string>

#include "TurkeyInterface.h"

class WildTurkey:public TurkeyInterface
{
public:
    WildTurkey():m_Name{"Wild Turkey"} {}
    virtual void Gobble() const override 
    {
        std::cout  << m_Name  + " Gobble Gobble \n";
    };

    virtual void Fly() const override
    {
        std::cout << m_Name + " I'm flying a short distance\n";
    }
private: 
    std::string m_Name;
};