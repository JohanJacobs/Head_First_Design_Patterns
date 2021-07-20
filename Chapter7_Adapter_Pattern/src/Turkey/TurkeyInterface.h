#pragma once
class TurkeyInterface
{
public:
    virtual void Gobble() const=0;
    virtual void Fly() const=0;
    virtual ~TurkeyInterface()=default;
};