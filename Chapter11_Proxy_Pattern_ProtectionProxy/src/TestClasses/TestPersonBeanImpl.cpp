#include <iostream>

#include "TestPersonBeanImpl.h"
#include "PersonBean/PersonBeanImpl.h"

namespace ProtectionProxy
{
	TestPersonBeanIMpl::TestPersonBeanIMpl()
		:m_Person{std::make_unique<PersonBeanImpl>()}
	{

	}

	void TestPersonBeanIMpl::Run()
	{
		m_Person->SetName("Test Person");
		m_Person->SetGender("Test Gender");
		m_Person->SetInterests("Test Interest");
		m_Person->SetHotOrNotRating(5);
		m_Person->SetHotOrNotRating(2);

		std::cout << "--------------------------------------------\n"
			<< " Hot or not Ratings for \n"
			<< "  Person  : " << m_Person->GetName() << "\n"
			<< "  Gender  : " << m_Person->GetGender() << "\n"
			<< "  Interest: " << m_Person->GetInterests() << "\n"
			<< "  Rating  : " << m_Person->GetHotOrNotRating() << "\n"
			<< "--------------------------------------------\n";
	}
}