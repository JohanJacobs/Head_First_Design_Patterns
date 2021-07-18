#pragma once
#include "ObjectInterface.h"

namespace Objects
{
	class Stereo : public ObjectInterface
	{

	public:
		Stereo(const std::string& name) : m_Name{ name } { }

		void On() { std::cout << GetName() << m_Name << " on\n"; }
		void Off() { std::cout << GetName() << m_Name << " off\n"; }
		void SetCD() { std::cout << GetName() << m_Name << " Set CD\n"; }
		void SetRadio() { std::cout << GetName() << m_Name << " Set Radio\n"; }
		void SetDVD() { std::cout << GetName() << m_Name << " Set DVD\n"; }
		void SetVolume(int volume) { m_Volume = volume; std::cout << GetName() << m_Name << " Set Volume to " <<std::to_string(m_Volume) << "\n"; }
		int GetVolume() const { return m_Volume; }
		std::string GetName() const override
		{
			return m_Name + " Stereo";
		}
	private:
		int m_Volume{0};
		std::string m_Name;
	};
}
