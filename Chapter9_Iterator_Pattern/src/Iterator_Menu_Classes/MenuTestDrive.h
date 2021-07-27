#pragma once
#include "MenuClasses/DinerMenu.h"
#include "MenuClasses/PancakeHouseMenu.h"
#include "Waitress/Waitress.h"

namespace Itertor_Menu
{
	class MenuTestDrive
	{
	public:
		void Run()
		{
			PancakeHouseMenu pancakeHouseMenu;
			DinerMenu dinerMenu;
			Waitress waitress(pancakeHouseMenu,dinerMenu);

			waitress.PrintMenu();
		}
	};
}
