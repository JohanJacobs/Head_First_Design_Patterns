#include "PersonBeanImpl.h"
namespace ProtectionProxy
{

	PersonBeanImpl::PersonBeanImpl()
	{

	}

	const std::string& PersonBeanImpl::GetName() const
	{
		return m_Name;
	}

	const std::string& PersonBeanImpl::GetGender() const
	{
		return m_Gender;
	}

	const std::string& PersonBeanImpl::GetInterests() const
	{
		return m_Interests;
	}

	int PersonBeanImpl::GetHotOrNotRating() const
	{
		if (m_RatingCount == 0)
			return 0;

		return int{ m_Rating / m_RatingCount };
	}

	void PersonBeanImpl::SetName(const std::string& name)
	{
		m_Name = name;
	}

	void PersonBeanImpl::SetGender(const std::string& gender)
	{
		m_Gender = gender;
	}

	void PersonBeanImpl::SetInterests(const std::string& interests)
	{
		m_Interests = interests;
	}

	void PersonBeanImpl::SetHotOrNotRating(int rating)
	{
		m_Rating += rating;
		m_RatingCount += 1;
	}

}