#pragma once
#include "core/base.h"
#include "MenuComponent/MenuComponent.h"
#include "Menu/Menu.h"
#include "MenuItem/MenuItem.h"

#include "Waitress/Waitress.h"

namespace CompositePattern
{
	class MenuTestDrive
	{
	public:
		MenuTestDrive()
		{
			//create all the menus 
			Ref<MenuComponent> pancakeHouseMenu = CreateRef<Menu>("PANCAKE HOUSE MENU", "Breakfast");
			Ref<MenuComponent> cafeMenu = CreateRef<Menu>("CAFE MENU", "dinner");
			Ref<MenuComponent> dinerMenu = CreateRef<Menu>("DINER MENU","Lunch");
			Ref<MenuComponent> dessertMenu = CreateRef<Menu>("DESSERT MENU", "Dessert of course!");
			dinerMenu->Add(dessertMenu);

			// combine menus into 1 menu 
			Ref<MenuComponent> allMenus = CreateRef<Menu>("ALL MENUS", "All menus combined!");
			allMenus->Add(pancakeHouseMenu);
			allMenus->Add(dinerMenu);
			allMenus->Add(cafeMenu);


			// add menu items 
			dessertMenu->Add(CreateRef<MenuItem>("Pasta","SPaghetti with marinara Sauce, and a slice of sourdough bread",true,3.89));
			dessertMenu->Add(CreateRef<MenuItem>("Apple Pie","Apple pie with a flaky crust, topped with vanilla ice cream",true,1.59));
			dessertMenu->Add(CreateRef<MenuItem>("Sorbet", "A scoop of raspberry and a scoop of lime", true, 1.89));

			pancakeHouseMenu->Add(CreateRef<MenuItem>("K&B's Pancake Breakfast","Pancakes with scrambled eggs, and toast",true, 2.99));
			pancakeHouseMenu->Add(CreateRef<MenuItem>("Regular Pancake Breakfast","Pancakes with fried eggs, sausage",true,2.99));
			pancakeHouseMenu->Add(CreateRef<MenuItem>("Blueberry Pancakes","Pancakes made with fresh blueberries, and blueberry syrup",true,3.49));
			pancakeHouseMenu->Add(CreateRef<MenuItem>("Waffles","Waffles, with your choice of blueberries or strawberries",true,1.00));
			
			dinerMenu->Add(CreateRef<MenuItem>("Vegetarian BLT", "(Fakin') Bacon with lettuce & tomato on whole wheat", true, 2.99));
			dinerMenu->Add(CreateRef<MenuItem>("BLT", "Bacon with lettuce & tomato on whole wheat", false, 2.99));
			dinerMenu->Add(CreateRef<MenuItem>("Soup of the day", "Soup of the day, with a side of potato salad", false, 3.29));
			dinerMenu->Add(CreateRef<MenuItem>("Hotdog", "A hot dog, with saurkraut, relish, onions, topped with cheese", false, 3.05));

			cafeMenu->Add(CreateRef<MenuItem>("Veggie Burger and Air Fries", "Veggie burger on a whole wheat bun, lettuce, tomato, and fries", true, 3.99));
			cafeMenu->Add(CreateRef<MenuItem>("Soup of the day", "A cup of soup of the day, with a side salad", false, 3.69));
			cafeMenu->Add(CreateRef<MenuItem>("Burrito", "A Large burrito, with whole pinto beans, salsa, guacamole", true, 4.29));

			Waitress waitress(allMenus);

			waitress.PrintMenu();

		}
	};
}
