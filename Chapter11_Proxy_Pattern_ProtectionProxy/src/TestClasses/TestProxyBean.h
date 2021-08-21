#pragma once
#include <iostream>

#include "PersonBean/PersonBeanInterface.h"
#include "PersonBean/PersonBeanImpl.h"
#include "ProxyClasses/PersonBeanProxy.h"
namespace ProtectionProxy
{

	class TestProxyBean
	{
	public:
		TestProxyBean()
		{

		}
		void Run()
		{
			std::cout << "\n\n\n Testing the Protection Proxy\n";
			std::shared_ptr<PersonBeanInterface> joe = std::make_shared<PersonBeanImpl>();
			std::shared_ptr<PersonBeanInterface> owner = PersonBeanProxy::GetOwnerProxy(joe);
			std::shared_ptr<PersonBeanInterface> nonOwner = PersonBeanProxy::GetNonOwnerProxy(joe);

			std::cout << "Setting up Joe\n";
			owner->SetName("Joe");
			owner->SetGender("Male");
			owner->SetInterests("bowling, Go");

			std::cout << "ProxyOwner trying to set rating: ";
			owner->SetHotOrNotRating(5);

			std::cout << "ProxyNonOwner set interests to 'None': ";
			nonOwner->SetInterests("None");
			std::cout << "Interests : " << nonOwner->GetInterests() <<"\n";

			std::cout << "Set hot or not Rating to 3\n";
			nonOwner->SetHotOrNotRating(3);
			std::cout << "Hot or Not Rating is " << nonOwner->GetHotOrNotRating();


						
		}
	private:
	};
}
