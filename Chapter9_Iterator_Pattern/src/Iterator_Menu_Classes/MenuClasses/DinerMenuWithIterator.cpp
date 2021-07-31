#include "Iterator_Menu_Classes/MenuClasses/DinerMenuWithIterator.h"
#include <iostream>
namespace Itertor_Menu
{
	
	DinerMenuWithIterator::DinerMenuWithIterator()
	{
		AddItem("Vegetarian BLT", "(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99);
		AddItem("BLT", "Bacon with lettuce & tomato on whole wheat", false, 2.99);
		AddItem("Soup of the day", "Soup of the day, with a side of potato salad", false, 3.29);
		AddItem("Hotdog", "A hot dog, with saurkraut, relish, onions, topped with cheese", false, 3.05);

		/* uncomment to trigger the limit of menu items */
		//AddItem("5", "5", false, 3.05);
		//AddItem("6", "6", false, 3.05);
		//AddItem("7", "7", false, 3.05); // this gives an error
	}

	void DinerMenuWithIterator::AddItem(const std::string& name, const std::string description, bool IsVegetarian, double price)
	{
		if (m_NumberOfItems >= MAX_ITEMS)
		{
			std::cout << "Diner Menu ERROR: menu is full!! Can't add item to menu\n";
		}
		else
		{
			m_MenuItems[m_NumberOfItems++] = std::make_shared<MenuItem>(name, description, IsVegetarian, price);
		}
	}

}