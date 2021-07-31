#pragma once
#include <unordered_map>

#include "IteratorInterface.h"
namespace Itertor_Menu
{
	class CafeMenuIterator : public IteratorInterface
	{

	public:
		CafeMenuIterator(const std::unordered_map<std::string, std::shared_ptr<MenuItem>>& items)
			:m_MenuItems{ items }
		{
			m_Begin = std::begin(m_MenuItems); // get a c++ const iterator 
		}

		bool HasNext() const override
		{
			if (m_Begin != std::end(m_MenuItems))
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		const std::shared_ptr<MenuItem> Next() override
		{
			auto result = m_Begin->second;
			m_Begin++;
			return result;
		}

	private:		
		const std::unordered_map<std::string, std::shared_ptr<MenuItem>>& m_MenuItems;
		std::unordered_map<std::string, std::shared_ptr<MenuItem>>::const_iterator m_Begin;
	};
}