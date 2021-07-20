#pragma once 
#include <iostream>
namespace HSHT
{
    class PopcornPopper
    {
    public:
        void On()
        {
            std::cout << "Popcorn Popper on\n";
        }
        void Off()
        {
            std::cout << "Popcorn Popper off\n";
        }

        void Pop()
        {
            std::cout << "Popcorn Popper popping\n";
        }
    };
}