#pragma once 
class DuckInterface
{
    public:
    virtual void Quack() const =0;
    virtual void Fly() const=0;    
    virtual ~DuckInterface()=default;
};