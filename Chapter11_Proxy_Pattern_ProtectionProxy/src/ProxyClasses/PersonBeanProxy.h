#pragma once
#include <memory>
#include "PersonBean/PersonBeanInterface.h"

namespace ProtectionProxy
{
	class PersonBeanProxy
	{
	public:
		// Create a Protection proxy for the Owner, Requires the original person object
		static std::unique_ptr<PersonBeanInterface> GetOwnerProxy(std::shared_ptr<PersonBeanInterface> person);

		// Create a Protection proxy for a "viewer" of the person object
		static std::unique_ptr<PersonBeanInterface> GetNonOwnerProxy(std::shared_ptr<PersonBeanInterface> person);

	private:
	};
}
