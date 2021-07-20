#include <iostream>

#include "HomeTheaterFacade/HomeTheaterFacade.h"

#include "HomeSweetHomeTheater/Amplifier/Amplifier.h"
#include "HomeSweetHomeTheater/Tuner/Tuner.h"
#include "HomeSweetHomeTheater/DVDPlayer/DVDPlayer.h"
#include "HomeSweetHomeTheater/CdPlayer/CDPlayer.h"
#include "HomeSweetHomeTheater/Projector/Projector.h"
#include "HomeSweetHomeTheater/TheaterLights/TheaterLights.h"
#include "HomeSweetHomeTheater/Screen/Screen.h"
#include "HomeSweetHomeTheater/PopcornPopper/PopcornPopper.h"

int main ()
{
    std::cout << "Hello Head First Design Patterns!\n";
	std::cout << "Chapter 7 - Facade Pattern!\n";    

    // create all the devices that we want to use in the home theater
    HSHT::Amplifier amp;
    HSHT::Tuner tuner;
    HSHT::DVDPlayer dvd;
    HSHT::CdPlayer cd;
    HSHT::Projector projector;
    HSHT::TheaterLights lights;
    HSHT::Screen screen;
    HSHT::PopcornPopper popper;

    HSHT::HomeTheaterFacade facade(amp, tuner,dvd, cd,projector,screen,lights,popper); // pass all the components

    facade.WatchMovie("Happy Potter"); // call the simplified interface to execute all the steps
    
    std::cout << "\n\n watching \n\n";
    facade.EndMovie();
}