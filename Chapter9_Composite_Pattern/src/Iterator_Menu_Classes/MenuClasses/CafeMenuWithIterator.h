#pragma once
#include <unordered_map>
#include <memory>
#include <string>

#include "MenuItem/MenuItem.h"
#include "Iterator_Menu_Classes/MenuClasses/MenuInterface.h"
#include "Iterator_Menu_Classes/Iterators/CafeMenuIterator.h"

namespace Itertor_Menu
{

	class CafeMenuWithIterator : public MenuInterface
	{
	public:
		CafeMenuWithIterator();

		std::shared_ptr<IteratorInterface> CreateIterator() override;

		void AddItem(const std::string& name, const std::string description, bool IsVegetarian, double price);
	private:
		std::unordered_map<std::string, std::shared_ptr<MenuItem>> m_MenuItems;
	};

}