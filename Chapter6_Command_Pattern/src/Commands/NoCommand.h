#pragma once
#include "CommandInterface.h"

namespace Commands
{
	class NoCommand : public CommandInterface
	{
	public:

		void Execute() override
		{
			std::cout << "  NoCommand Execute\n";
		}

		void Undo() override
		{
			std::cout << "  NoCommand Undo\n";
		}


		std::string GetName() const override
		{
			return "NoCommand";
		}

	};
}
