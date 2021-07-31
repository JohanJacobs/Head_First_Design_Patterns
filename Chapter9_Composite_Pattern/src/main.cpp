#include <iostream>

#include "Default_Menu_Classes/DefaultMenuTest.h"

#include "Iterator_Menu_Classes/MenuTestDriveWithIterator.h"

int main()
{
	std::cout << "Hello Head First Design Patterns!\n";
	std::cout << "Chapter 9 - Iterator Pattern!\n";

	// Testing the default menus
	//DefaultMenuImplementation::DefaultMenuTest defaultMenu;
	//defaultMenu.Run();

	//Testing the first iterator implementation with updated waitress code 
	Itertor_Menu::MenuTestDriveWithIterator test;
	test.Run();
}
