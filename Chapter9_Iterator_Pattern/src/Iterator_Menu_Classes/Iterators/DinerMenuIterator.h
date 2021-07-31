#pragma once

#include <array>
#include <memory>

#include "IteratorInterface.h"
#include "Iterator_Menu_Classes/MenuClasses/DinerMenuWithIterator.h"

namespace Itertor_Menu
{
	class DinerMenuIterator : public IteratorInterface
	{
		
	public:
		DinerMenuIterator(const std::array< std::shared_ptr<MenuItem>, 6>& items)
			:m_MenuItems{ items }
		{

		}
		bool HasNext() const override
		{			
			if (m_Position >= m_MenuItems.size() || m_MenuItems[m_Position] == nullptr)
			{
				return false;
			}
			else
			{
				return true;
			}
		}

		const std::shared_ptr<MenuItem> Next() override
		{			
			return m_MenuItems[m_Position++];
		}

	private:
		const std::array<std::shared_ptr<MenuItem>, 6>& m_MenuItems;
		int m_Position{ 0 };
	};
}
