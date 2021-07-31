#pragma once
#include "core/base.h"
#include "MenuComponent/MenuComponent.h"

namespace CompositePattern
{
	class MenuItem : public MenuComponent
	{
	public:
		MenuItem(const std::string& name, const std::string& description, bool isVegetarian, double price )
			:m_Name{ name }, m_Description{ description }, m_Vegetarian{ isVegetarian }, m_Price{ price }
		{

		}

		const std::string& GetName() const override
		{
			return m_Name;
		}


		const std::string& GetDescription() const override
		{
			return m_Description;
		}


		double GetPrice() const override
		{
			return m_Price;
		}


		bool IsVegetarian() const override
		{
			return m_Vegetarian;
		}


		void Print() const override
		{
			std::cout << "  " << GetName() << (IsVegetarian() ? "(v)" : "") << ", " << GetPrice() << "--" << GetDescription() << "\n";
		}

	private:
		std::string m_Name;
		std::string m_Description;
		bool m_Vegetarian;
		double m_Price;
	};
}
