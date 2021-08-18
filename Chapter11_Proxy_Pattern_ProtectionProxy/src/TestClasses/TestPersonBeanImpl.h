#pragma once
#include <memory>
#include "PersonBean\PersonBeanInterface.h"

namespace ProtectionProxy
{
	class TestPersonBeanIMpl
	{
	public:
		TestPersonBeanIMpl();
		void Run();

	private:
		std::unique_ptr<PersonBeanInterface> m_Person;
	};



}
