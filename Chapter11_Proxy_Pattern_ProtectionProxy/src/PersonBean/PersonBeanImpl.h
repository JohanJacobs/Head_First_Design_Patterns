#pragma once
#include "PersonBeanInterface.h"
namespace ProtectionProxy
{
	class PersonBeanImpl :public PersonBeanInterface
	{

	public:
		PersonBeanImpl();
		const std::string& GetName() const override;

		const std::string& GetGender() const override;

		const std::string& GetInterests() const override;

		int GetHotOrNotRating() const override;

		void SetName(const std::string& name) override;

		void SetGender(const std::string& gender) override;

		void SetInterests(const std::string& interests) override;

		void SetHotOrNotRating(int rating) override;

	private:
		std::string m_Name;
		std::string m_Gender;
		std::string m_Interests;
		int m_Rating{0};
		int m_RatingCount{0};

	};
}
