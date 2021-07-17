#pragma once
#include "ObjectInterface.h"

namespace Objects
{
	enum class CeilingFanSpeed
	{
		off,
		low,
		medium,
		high
	};

	class CeilingFan :public ObjectInterface
	{
	public:
		CeilingFan(const std::string& name) : m_Name{ name } { }
		std::string GetName() const override { return m_Name + " Ceiling Fan"; }
		void High() { m_Speed = CeilingFanSpeed::high; std::cout << m_Name << " Ceiling fan is high speed"; }
		void Medium() { m_Speed = CeilingFanSpeed::medium; std::cout << m_Name << " Ceiling fan is medium speed"; }
		void Low() { m_Speed = CeilingFanSpeed::low; std::cout << m_Name << " Ceiling fan is low speed"; }
		void Off() { std::cout << m_Name << " Ceiling fan is off\n"; }
		void On() { std::cout << m_Name << " Ceiling fan is on\n"; }
		CeilingFanSpeed GetSpeed() { return m_Speed; }

	private:
		CeilingFanSpeed m_Speed{CeilingFanSpeed::off};
		std::string m_Name;
	};
}