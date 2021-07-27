#pragma once
#include <iostream>
#include <memory.h>

#include "Iterator_Menu_Classes/MenuClasses/DinerMenu.h"
#include "Iterator_Menu_Classes/MenuClasses/PancakeHouseMenu.h"

#include "Iterator_Menu_Classes/Iterators/IteratorInterface.h"

#include "MenuItem/MenuItem.h"


namespace Itertor_Menu
{
	class Waitress
	{
	public:
		Waitress(PancakeHouseMenu& pancakeHouse, DinerMenu& dinerMenu)
			:m_PancakeHouseMenu{ pancakeHouse }, m_DinerMenu{ dinerMenu }
		{
		}
		void PrintMenu()
		{
			auto pancakeIterator = m_PancakeHouseMenu.CreateIterator();
			auto dinerIterator = m_DinerMenu.CreateIterator();			
			std::cout << "Menu \n ---- \n BREAKFAST\n";
			PrintMenu(pancakeIterator);
			std::cout << "LUNCH\n";
			PrintMenu(dinerIterator);
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
		PancakeHouseMenu& m_PancakeHouseMenu;
		DinerMenu& m_DinerMenu;
	};
}
