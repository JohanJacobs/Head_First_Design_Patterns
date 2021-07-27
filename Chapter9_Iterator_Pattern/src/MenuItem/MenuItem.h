#pragma once
#include <string>
class MenuItem
{
public:
	MenuItem(const std::string& name, const std::string description, bool isVegetarian, double price)
		:m_Name{name},m_Description{description},m_Vegetarian{isVegetarian}, m_Price{price}
	{
	}

	const std::string& GetName() const { return m_Name; }
	const std::string& GetDescription() const { return m_Description; }
	double GetPrice() const { return m_Price; }
	bool IsVegetarian() const { return m_Vegetarian; }
private:
	std::string m_Name;
	std::string m_Description;
	bool m_Vegetarian;
	double m_Price;
};