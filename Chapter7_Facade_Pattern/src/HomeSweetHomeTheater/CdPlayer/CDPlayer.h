#pragma once
#include <iostream>

namespace HSHT
{
    class CdPlayer
    {
    public:
        void On()
        {
            std::cout << "CdPlayer on\n";
        }
        void Off()
        {
            std::cout << "CdPlayer off\n";
        }
        void Eject()
        {
            std::cout << "CdPlayer Eject\n";
        }
        void Pause()
        {
            std::cout << "CdPlayer Pause\n";
        }
        void Play()
        {
            std::cout << "CdPlayer Play\n";
        }
        void Stop()
        {
            std::cout << "CdPlayer Stop\n";
        }

    private:
    
    };
}
