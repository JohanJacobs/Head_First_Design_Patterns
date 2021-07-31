#pragma once
#include <vector> // using Vector as the alternative to JAVA arraylist
#include <memory>

#include "MenuItem/MenuItem.h"
#include "Iterator_Menu_Classes/Iterators/PancakeHouseIterator.h"
#include "Iterator_Menu_Classes/MenuClasses/MenuInterface.h"

namespace Itertor_Menu
{
	class PancakeHouseMenuWithIterator: public MenuInterface
	{
	public:
		PancakeHouseMenuWithIterator();
		void AddItem(const std::string& name, const std::string description, bool IsVegetarian, double price);

		std::shared_ptr<IteratorInterface> CreateIterator() override;

		/* removed this in favor of the iterator
		* const std::vector<std::shared_ptr<MenuItem>>& GetMenuItems() const { return m_MenuItems; };
		*/
	private:
		std::vector<std::shared_ptr<MenuItem>> m_MenuItems;

	};
}