#pragma once
#include <memory>

#include "Commands/CommandInterface.h"

namespace Remote
{
	class RemoteTest
	{
	public:
		RemoteTest()
		{
			
		}

		void SetCommand(std::shared_ptr<Commands::CommandInterface> command)
		{
			m_Command = command;
		}

		void buttonWasPressed()
		{
			m_Command->Execute();
		}
	private:
		std::shared_ptr<Commands::CommandInterface> m_Command;
	};
}
