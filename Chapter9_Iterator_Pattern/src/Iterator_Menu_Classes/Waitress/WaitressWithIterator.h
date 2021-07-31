#pragma once
#include <iostream>
#include <memory.h>

#include "Iterator_Menu_Classes/Iterators/IteratorInterface.h"
#include "Iterator_Menu_Classes/MenuClasses/MenuInterface.h"

#include "MenuItem/MenuItem.h"


namespace Itertor_Menu
{
	class WaitressWithIterator
	{
	public:
		WaitressWithIterator(MenuInterface& pancakeHouse, MenuInterface& dinerMenu, MenuInterface& cafeMenu)
			:m_PancakeHouseMenu{ pancakeHouse }, m_DinerMenu{ dinerMenu },m_CafeMenu{ cafeMenu }
		{

		}

		void PrintMenu()
		{
			auto pancakeIterator = m_PancakeHouseMenu.CreateIterator();
			auto dinerIterator = m_DinerMenu.CreateIterator();			
			auto cafeIterator = m_CafeMenu.CreateIterator();

			std::cout << "Menu \n ---- \n BREAKFAST\n";
			PrintMenu(pancakeIterator);
			std::cout << "LUNCH\n";
			PrintMenu(dinerIterator);
			std::cout << "Dinner\n";
			PrintMenu(cafeIterator);
		}

		void PrintMenu(std::shared_ptr<IteratorInterface> iterator)
		{
			while (iterator->HasNext())
			{
				std::shared_ptr<MenuItem> item = iterator->Next();

				std::cout << item->GetName() << " : " << item->GetDescription()
					<< "\n   Price: " << item->GetPrice()
					<< "\n   Vegetarian: " << (item->IsVegetarian() ? "Yes" : "No") << "\n\n";
			}
		}
	private:
		MenuInterface& m_PancakeHouseMenu;
		MenuInterface& m_DinerMenu;
		MenuInterface& m_CafeMenu;
	};
}
