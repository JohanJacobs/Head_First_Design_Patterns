#include "PancakeHouseMenu.h"
namespace DefaultMenuImplementation
{
	PancakeHouseMenu::PancakeHouseMenu()
	{
		AddItem("K&B's Pancake Breakfast", "Pancakes with scrambled eggs, and toast", true, 2.99);
		AddItem("Regular Pancake Breakfast", "Pancakes with fried eggs, sausage", false, 2.99);
		AddItem("Blueberry Pancakes", "Pancakes made with fresh blueberries", true, 3.49);
		AddItem("Waffles", "Waffles, with your choice of blueberries or strawberries", true, 3.59);
	}

	void PancakeHouseMenu::AddItem(const std::string& name, const std::string description, bool IsVegetarian, double price)
	{
		/*
		*   removed the two lines of code in favor of using emplace_back
			auto item = std::make_shared<MenuItem>(name, description, IsVegetarian, price);
			m_MenuItems.push_back(item);
		*/
		m_MenuItems.emplace_back(std::make_shared<MenuItem>(name, description, IsVegetarian, price));
	}
}