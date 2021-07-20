#pragma once 
#include <iostream>
#include "HomeSweetHomeTheater/DVDPlayer/DVDPlayer.h"

namespace HSHT
{
    class Amplifier
    {
    public:
        void On()
        {
            std::cout << "Amplifier on\n";
        }
        void Off()
        {
            std::cout << "Amplifier off\n";
        }
        void SetCD()
        {
            std::cout << "Amplifier set CD\n";
        }
        void SetDVD(DVDPlayer* dvd)
        {
            m_DVD = dvd;
            std::cout << "Amplifier set DVD\n";
        }
        void SetStereoSound()
        {
            std::cout << "Amplifier set stereo sound\n";
        }
        void SetSurroundSound()
        {
            std::cout << "Amplifier set surround sound\n";
        }
        void SetTuner()
        {
            std::cout << "Amplifier set tuner\n";
        }
        void SetVolume(int volumeValue)
        {
            m_Volume = volumeValue;
            std::cout << "Amplifier set volume to " << m_Volume << "\n";
        }

    private:    
        DVDPlayer* m_DVD{nullptr};
        int m_Volume {0};
    };
}