#pragma once
#include "core/base.h"
#include "MenuComponent/MenuComponent.h"
namespace CompositePattern
{
	class Waitress
	{
	public:
		Waitress(Ref<MenuComponent> allMenus)
			:m_Component{allMenus}
		{

		}

		void PrintMenu() const
		{
			m_Component->Print();
		}
	private:
		Ref<MenuComponent> m_Component;
	};
}
