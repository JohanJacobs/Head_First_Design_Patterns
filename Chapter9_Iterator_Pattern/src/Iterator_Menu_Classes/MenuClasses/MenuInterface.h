#pragma once
#include <memory>
#include "Iterator_Menu_Classes/Iterators/IteratorInterface.h"

namespace Itertor_Menu
{
	class MenuInterface
	{
	public:
		virtual ~MenuInterface() = default;
		virtual std::shared_ptr<IteratorInterface> CreateIterator() = 0;
	};
}
