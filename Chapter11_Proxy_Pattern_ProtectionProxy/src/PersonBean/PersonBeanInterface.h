#pragma once
#include <string>

namespace ProtectionProxy
{
	// Interface for each person in the hot or not game 
	class PersonBeanInterface
	{
	public:
		// Get information about the person.,
		virtual const std::string& GetName() const = 0;
		virtual const std::string& GetGender() const = 0;
		virtual const std::string& GetInterests() const = 0;
		virtual int GetHotOrNotRating() const = 0;

		// Set Information about the person
		virtual void SetName(const std::string& name) = 0;
		virtual void SetGender(const std::string& gender) = 0;
		virtual void SetInterests(const std::string& interests) = 0;
		virtual void SetHotOrNotRating(int rating) = 0;
		virtual ~PersonBeanInterface();

	};

}
