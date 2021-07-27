#include <iostream>
#include "Default_Menu_Classes/DefaultMenuTest.h"

int main()
{
	std::cout << "Hello Head First Design Patterns!\n";
	std::cout << "Chapter 9 - Iterator Pattern!\n";

	// Testing the default menus
	DefaultMenuImplementation::DefaultMenuTest defaultMenu;
	defaultMenu.Run();
}
