#pragma once
#include "core/base.h"
#include "MenuComponent/MenuComponent.h"

namespace CompositePattern 
{
	class Menu :public MenuComponent
	{
	public:
		Menu(const std::string& name, const std::string& description)
			:m_Name{name}, m_Description{description}
		{

		}

		void Add(Ref<MenuComponent> menuComponent) override
		{			
			m_Components.push_back(menuComponent);
		}

		void Remove(Ref<MenuComponent> menuComponent) override
		{
			//erase remove idiom c++: https://en.wikibooks.org/wiki/More_C%2B%2B_Idioms/Erase-Remove
			// done over multiple lines for simplicity when reading 

			auto start_of_removed_components = std::remove(std::begin(m_Components), std::end(m_Components), menuComponent);
			m_Components.erase(start_of_removed_components, std::end(m_Components)); // using location of components to End of Container incase there are duplicate entries.
		}


		const Ref<MenuComponent> GetChild(int i) const override
		{
			return m_Components[i];
		}


		const std::string& GetName() const override
		{
			return m_Name;
		}


		const std::string& GetDescription() const override
		{
			return m_Description;
		}

		void Print() const override
		{
			std::cout <<  GetName() << " -- " << GetDescription() << "\n";
			std::cout << "-------------------------------------------------------\n";

			for (const auto item : m_Components)
			{
				item->Print();
			}
		}

	private:
		std::vector <Ref<MenuComponent>> m_Components;
		std::string m_Name;
		std::string m_Description;
	};
}
