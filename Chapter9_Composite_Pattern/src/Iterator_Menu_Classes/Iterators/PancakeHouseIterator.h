#pragma once
#include <vector>

#include "IteratorInterface.h"

namespace Itertor_Menu
{
	class PancakeHouseMenuIterator :public IteratorInterface
	{

	public:
		PancakeHouseMenuIterator(const std::vector<std::shared_ptr<MenuItem>>& items)
			:m_Items{ items }
		{
		}

		bool HasNext() const override
		{
			if (m_Postion < m_Items.size())
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
			return m_Items[m_Postion++];
		}
	private:
		const std::vector<std::shared_ptr<MenuItem>>& m_Items;
		int m_Postion{ 0 };
	};
}
