#pragma once
#include "ObjectInterface.h"
#include <string>
#include <iostream>
namespace Objects
{
	class GarageDoor: public ObjectInterface
	{
	public:
		GarageDoor(const std::string& name = "Garage") : m_Name{name} {}			
		std::string GetName() const override { return m_Name; }
		void Open() { std::cout << m_Name + " opening\n"; }
		void Close() { std::cout << m_Name + " closing\n"; }
	private:
		std::string m_Name;
	};
}
