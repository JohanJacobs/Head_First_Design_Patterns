#pragma once 
#include <iostream>
namespace HSHT
{
    class Screen
    {
    public:
        void Up()
        {
            std::cout << "Screen up\n";
        }
        void Down()
        {
            std::cout << "Screen down\n";
        }
    };
}