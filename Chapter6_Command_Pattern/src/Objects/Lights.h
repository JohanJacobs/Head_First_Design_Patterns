#pragma once
#include <string>
#include "Objects/ObjectInterface.h"

namespace Objects
{
	class Light : public ObjectInterface
	{		
	public:
		Light(const std::string& name)
			:m_Name{ name }
		{

		}
		void On() 
		{
			std::cout << GetName() << " On \n";
		}

		void Off()
		{
			std::cout << GetName() << " Off \n";
		}

		std::string GetName() const override
		{
			return m_Name + " light ";
		}

	private:
		std::string m_Name;
	};

}
