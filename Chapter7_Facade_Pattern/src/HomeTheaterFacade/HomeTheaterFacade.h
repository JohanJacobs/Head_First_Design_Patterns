#pragma once
#include <string>
#include <iostream>

#include "HomeSweetHomeTheater/Amplifier/Amplifier.h"
#include "HomeSweetHomeTheater/Tuner/Tuner.h"
#include "HomeSweetHomeTheater/DVDPlayer/DVDPlayer.h"
#include "HomeSweetHomeTheater/CdPlayer/CDPlayer.h"
#include "HomeSweetHomeTheater/Projector/Projector.h"
#include "HomeSweetHomeTheater/TheaterLights/TheaterLights.h"
#include "HomeSweetHomeTheater/Screen/Screen.h"
#include "HomeSweetHomeTheater/PopcornPopper/PopcornPopper.h"

namespace HSHT
{
    /*
        Facade pattern that uses composition to combine all the elements form the home theater system.
    */
    class HomeTheaterFacade
    {
    public:
        HomeTheaterFacade( Amplifier& amp, Tuner& tuner,DVDPlayer& dvdPlayer, CdPlayer& cdPlayer, Projector& projector, Screen& screen, TheaterLights& lights, PopcornPopper& popper)
        : m_Amp{amp}, m_Tuner{tuner},m_DVDPlayer{dvdPlayer},m_CDPlayer{cdPlayer},m_Projector{projector},m_Screen{screen},m_Lights{lights},m_Popper{popper},m_Movie{"None"}
        {

        }

        // all the steps required to start a movie. 
        void WatchMovie(const std::string movieName)
        {
            std::cout << "Get ready to watch a movie...\n";
            m_Movie = movieName;

            m_Popper.On();
            m_Popper.Pop();

            m_Lights.On();
            m_Lights.Dim(10);

            m_Screen.Down();

            m_Projector.On();
            m_Projector.WideScreenMode();

            m_Amp.On();
            m_Amp.SetDVD(&m_DVDPlayer);
            m_Amp.SetSurroundSound();
            m_Amp.SetVolume(5);

            m_DVDPlayer.On();
            m_DVDPlayer.Play(m_Movie);
        }

        // all the steps to end the movie and shut down everything
        void EndMovie()
        {
            std::cout << "Shutting movie theater down...\n";
            m_Popper.Off();
            m_Lights.Off();
            m_Screen.Up();
            m_Projector.Off();
            m_Amp.Off();
            m_DVDPlayer.Stop();
            m_DVDPlayer.Eject();
            m_DVDPlayer.Off();
        }

    // using composition for all the components
    private:
        Amplifier& m_Amp;
        Tuner& m_Tuner;
        DVDPlayer& m_DVDPlayer;
        CdPlayer& m_CDPlayer;
        Projector& m_Projector;
        Screen& m_Screen;
        TheaterLights& m_Lights;
        PopcornPopper& m_Popper;
        std::string m_Movie;        
    };
}