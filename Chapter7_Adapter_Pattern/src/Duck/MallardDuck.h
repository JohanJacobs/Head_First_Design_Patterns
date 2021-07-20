#pragma once
#include <iostream>
#include <string>
#include "DuckInterface.h"

class MallardDuck : public DuckInterface
{
public:
    MallardDuck()
        :m_Name{"Mallard Duck"}
    {

    }

    void Quack() const override
    {
        std::cout << m_Name + " Quack!\n";
    }

    void Fly() const override
    {
        std::cout << m_Name + " Flying!\n";
    }        
private:
    std::string m_Name;
};