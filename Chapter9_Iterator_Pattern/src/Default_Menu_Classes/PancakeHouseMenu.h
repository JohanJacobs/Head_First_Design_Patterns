#pragma once
#include <vector> // using Vector as the alternative to JAVA arraylist
#include <memory>

#include "MenuItem/MenuItem.h"

namespace DefaultMenuImplementation
{
	class PancakeHouseMenu
	{
	public:
		PancakeHouseMenu();
		void AddItem(const std::string& name, const std::string description, bool IsVegetarian, double price);
		const std::vector<std::shared_ptr<MenuItem>>& GetMenuItems() const { return m_MenuItems; };

	private:
		std::vector<std::shared_ptr<MenuItem>> m_MenuItems;

	};
}