#pragma once
#include <memory>
#include <iostream>

#include "PersonBean/PersonBeanInterface.h"

namespace ProtectionProxy
{

	/*
		Owner proxy allows the viewer(owner of the profile) to set/ get information but 
		not set a Hot or Not rating
	*/

	class OwnerProxy :public PersonBeanInterface
	{
	public:
		OwnerProxy(std::shared_ptr<PersonBeanInterface> person)
			:m_Person{ person }
		{

		}


		const std::string& GetName() const override
		{
			return m_Person->GetName();
		}


		const std::string& GetGender() const override
		{
			return m_Person->GetGender();
		}


		const std::string& GetInterests() const override
		{
			return m_Person->GetInterests();
		}


		int GetHotOrNotRating() const override
		{
			return m_Person->GetHotOrNotRating();
		}


		void SetName(const std::string& name) override
		{
			m_Person->SetName(name);
		}


		void SetGender(const std::string& gender) override
		{
			m_Person->SetGender(gender);
		}


		void SetInterests(const std::string& interests) override
		{
			m_Person->SetInterests(interests);
		}

		/*
			Owners of the profile can't set their own HotOrNot rating;
		*/
		void SetHotOrNotRating(int rating) override
		{
			std::cout << "Can't set own Hot or Not rating! \n";
		}

	private:
		std::shared_ptr<PersonBeanInterface> m_Person;
	};
}
