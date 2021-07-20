#pragma once 
#include <iostream>

namespace HSHT
{
    class Projector
    {
    public:
        void On()
        {
            std::cout << "Projector On\n";
        }
        void Off()
        {
            std::cout << "Projector Off\n";
        }
        void TVMode()
        {
            std::cout << "Projector TV Mode\n";
        }
        void WideScreenMode()
        {
            std::cout << "Projector Wide Screen Mode\n";
        }
    private:

    };
}