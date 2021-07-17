#pragma once
#include <string>
#include <iostream>
namespace Objects
{
	/* Interface for all the objects to use */
	class ObjectInterface
	{
	public:
		virtual std::string GetName() const = 0;
		virtual ~ObjectInterface() = default;
	};

}