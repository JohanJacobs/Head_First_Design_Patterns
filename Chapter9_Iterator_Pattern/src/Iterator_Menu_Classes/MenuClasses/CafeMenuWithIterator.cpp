#include "CafeMenuWithIterator.h"

namespace Itertor_Menu
{

	CafeMenuWithIterator::CafeMenuWithIterator()
	{
		AddItem("Veggie Burger and Air Fries", "Veggie burger on a whole wheat bun, lettuce, tomato, and fries", true, 3.99);
		AddItem("Soup of the day", "A cup of soup of the day, with a side salad", false, 3.69);
		AddItem("Burrito", "A Large burrito, with whole pinto beans, salsa, guacamole", true, 4.29);
	}

	std::shared_ptr<Itertor_Menu::IteratorInterface> CafeMenuWithIterator::CreateIterator()
	{
		return std::make_shared<CafeMenuIterator>(m_MenuItems);
	}

	void CafeMenuWithIterator::AddItem(const std::string& name, const std::string description, bool IsVegetarian, double price)
	{
		std::shared_ptr<MenuItem> item = std::make_shared<MenuItem>(name, description, IsVegetarian, price);
		m_MenuItems[item->GetName()] = item;
	}

}

