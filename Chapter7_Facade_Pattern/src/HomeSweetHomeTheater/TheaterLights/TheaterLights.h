#pragma once 
#include <iostream>
namespace HSHT
{
    class TheaterLights
    {
    public:
        void On()
        {
            std::cout << "Theater Lights on\n";
        }
        void Off()
        {            
            std::cout << "Theater Lights off\n";
        }

        void Dim(int value)
        {
            m_Value = value;
            std::cout << "Theater Lights Dimming" << m_Value << "\n";
        }
    private:
        int m_Value{0};
    };
}