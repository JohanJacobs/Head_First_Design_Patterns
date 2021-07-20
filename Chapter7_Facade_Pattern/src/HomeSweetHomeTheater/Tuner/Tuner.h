#pragma once
#include <iostream>
#include <string> 
namespace HSHT
{
    class Tuner
    {
    public:
        void On()
        {
            std::cout << "Tuner On\n";
        }
        void Off()
        {
            std::cout << "Tuner Off\n";
        }
        void SetAM()
        {
            std::cout << "Tuner set to AM\n";
        }
        void SetFM()
        {
            std::cout << "Tuner set to FM\n";
        }
        void SetFrequency(int frequency)
        {
            m_Frequency  = frequency;
            std::cout << "Tuner Frequency set to " <<  std::to_string (m_Frequency) << "\n";
        }
    private:
        int m_Frequency;
    };
}
