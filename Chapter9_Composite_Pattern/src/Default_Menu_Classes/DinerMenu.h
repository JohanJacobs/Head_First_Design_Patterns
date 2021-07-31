#pragma once
#include <array>
#include <string>
#include <memory>

#include "MenuItem/MenuItem.h"

namespace DefaultMenuImplementation
{
	class DinerMenu
	{
	public:
		static constexpr int MAX_ITEMS{6};
		DinerMenu();
		void AddItem(const std::string& name, const std::string description, bool IsVegetarian, double price);
		const std::array<std::shared_ptr<MenuItem>, MAX_ITEMS>& GetMenuItems() { return m_MenuItems; }
	private:
		int m_NumberOfItems{ 0 };
		std::array<std::shared_ptr<MenuItem>, MAX_ITEMS> m_MenuItems;
	};
}