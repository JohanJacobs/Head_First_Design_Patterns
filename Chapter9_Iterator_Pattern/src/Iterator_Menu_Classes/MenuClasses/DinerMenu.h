#pragma once
#include <array>
#include <string>
#include <memory>

#include "MenuItem/MenuItem.h"
#include "Iterator_Menu_Classes/Iterators/DinerMenuIterator.h"
#include "Iterator_Menu_Classes/Iterators/IteratorInterface.h"
#include "Iterator_Menu_Classes/MenuClasses/MenuInterface.h"
namespace Itertor_Menu
{
	
	class DinerMenu:public MenuInterface
	{
	public:
		static constexpr int MAX_ITEMS{ 6 };
		DinerMenu();
		void AddItem(const std::string& name, const std::string description, bool IsVegetarian, double price);
		
		std::shared_ptr<IteratorInterface>  CreateIterator() override 
		{
			return std::make_shared<DinerMenuIterator>(m_MenuItems);
		}		

		/* removed this in favor of the iterator 
		* const std::array<std::shared_ptr<MenuItem>, MAX_ITEMS>& GetMenuItems() { return m_MenuItems; } // removed  
		*/
	private:
		int m_NumberOfItems{ 0 };
		std::array<std::shared_ptr<MenuItem>, MAX_ITEMS> m_MenuItems;
	};
}