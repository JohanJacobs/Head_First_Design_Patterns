#pragma once
#include "CommandInterface.h"

namespace Commands
{
	class NoCommand : public CommandInterface
	{
	public:

		void Execute() override
		{
			std::cout << "  NoCommand\n";
		}


		std::string GetName() const override
		{
			return "NoCommand";
		}

	};
}
