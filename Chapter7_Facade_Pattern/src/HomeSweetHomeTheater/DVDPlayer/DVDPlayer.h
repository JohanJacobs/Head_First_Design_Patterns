#pragma once 
#include <iostream>
#include <string>

namespace HSHT
{
    class DVDPlayer
    {
    public:
        void On()
        {
            std::cout << "DVD Player on\n";
        }

        void Off()
        {
            std::cout << "DVD Player off\n";
        }
        void Eject ()
        {
            std::cout << "DVD Player eject\n";
        }
        void Pause()
        {
            std::cout << "DVD Player pause\n";
        }
        void Play(const std::string movieName)
        {
            m_Movie = movieName;
            std::cout << "DVD Player play [ " << m_Movie << " ]\n";
        }
        void SetSurroundAudio() 
        {
            std::cout << "DVD Player Set Surround Audio\n";
        }
        void SetTwoChannelAudio()
        {
            std::cout << "DVD Player Set Two Channel audio\n";
        }
        void Stop()
        {
            std::cout << "DVD Player stop\n";
        }
    private:
        std::string m_Movie;
    };
}