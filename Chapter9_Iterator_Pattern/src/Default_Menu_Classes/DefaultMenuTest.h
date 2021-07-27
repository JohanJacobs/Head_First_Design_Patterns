#pragma once
#include <iostream>
#include "Default_Menu_Classes/PancakeHouseMenu.h"
#include "Default_Menu_Classes/DinerMenu.h"

namespace DefaultMenuImplementation
{
	class DefaultMenuTest
	{
	public:
		DefaultMenuTest()
		{

		}

		void Run()
		{
			PancakeHouseMenu pancakeHouseMenu;
			DinerMenu dinerMenu;

			/*
				This is trivial example and uses the inbound c++ iterators.
			*/
			std::cout << "\n\nPancake House Menu:\n";
			for (const auto& m : pancakeHouseMenu.GetMenuItems())
			{
				std::cout << m->GetName() << " : " << m->GetDescription()
					<< "\n   Price: " << m->GetPrice()
					<< "\n   Vegetarian: " << (m->IsVegetarian() ? "Yes" : "No") << "\n\n";
			}

			std::cout << "\n\nDiner Menu:\n";
			for (const auto& m : dinerMenu.GetMenuItems())
			{
				std::cout << m->GetName() << " : " << m->GetDescription()
					<< "\n   Price: " << m->GetPrice()
					<< "\n   Vegetarian: " << (m->IsVegetarian() ? "Yes" : "No") << "\n\n";
			}
		}
	};
}
