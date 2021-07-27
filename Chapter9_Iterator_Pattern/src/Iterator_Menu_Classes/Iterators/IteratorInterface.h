#pragma once
#include <memory>

#include "MenuItem/MenuItem.h"

namespace Itertor_Menu
{
	class IteratorInterface
	{
	public:
		virtual ~IteratorInterface()=default;
		virtual bool HasNext() const = 0;
		virtual const std::shared_ptr<MenuItem> Next() = 0;
	};
}
