#pragma once 
#include <memory>
#include <string>

#include "Duck/DuckInterface.h"
#include "Turkey/TurkeyInterface.h"

/* Adapter */
class TurkeyAdapter : public DuckInterface
{
public:
    TurkeyAdapter(std::shared_ptr<TurkeyInterface> turkey): m_Name{"None"}, m_Turkey{turkey} {} 
    virtual void Quack() const
    {
        m_Turkey->Gobble();
    }
    virtual void Fly() const
    {
        for (int i=0; i < 5; i++)
            m_Turkey->Fly();
    }
private:
    std::string m_Name;
    std::shared_ptr<TurkeyInterface> m_Turkey;
};