#pragma once
#include "MenuClasses/DinerMenuWithIterator.h"
#include "MenuClasses/PancakeHouseMenuWithIterator.h"
#include "MenuClasses/CafeMenuWithIterator.h"
#include "Waitress/WaitressWithIterator.h"

namespace Itertor_Menu
{
	class MenuTestDriveWithIterator
	{
	public:
		void Run()
		{
			PancakeHouseMenuWithIterator pancakeHouseMenu;
			DinerMenuWithIterator dinerMenu;
			CafeMenuWithIterator cafeMenu;
			WaitressWithIterator waitress(pancakeHouseMenu,dinerMenu, cafeMenu);

			waitress.PrintMenu();
		}
	};
}
