#pragma once
#include <memory>
#include <iostream>

#include "PersonBean/PersonBeanInterface.h"

namespace ProtectionProxy
{
	/*
		Non Owner proxy allows the viewer to get information of the person and 
		set a rating for the person
	*/
	class NonOwnerProxy :public PersonBeanInterface
	{
	public:
		NonOwnerProxy(std::shared_ptr<PersonBeanInterface> person)
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
			std::cout << " Can't set Name! \n";
		}


		void SetGender(const std::string& gender) override
		{
			std::cout << " Can't set Gender! \n";
		}


		void SetInterests(const std::string& interests) override
		{
			std::cout << " Can't set Interests! \n";
		}


		void SetHotOrNotRating(int rating) override
		{
			m_Person->SetHotOrNotRating(rating);
		}

	private:
		std::shared_ptr<PersonBeanInterface> m_Person;
	};
}
