#pragma once
#include <array>
#include <string>

#include "Commands/CommandInterface.h"
#include "Commands/NoCommand.h"

namespace Remote
{
	class RemoteControl
	{
	public:
		/* Create a Remote control */
		RemoteControl()
		{
			// set all command buttons to "No Command"
			for (size_t index = 0; index < 7; index++)
			{
				m_OnCommands[index]  = std::make_shared<Commands::NoCommand>();
				m_OffCommands[index] = std::make_shared<Commands::NoCommand>();
			}
		}

		/* assigns an on and off command to a slot */
		void SetCommand(size_t slot, std::shared_ptr<Commands::CommandInterface> onCommand, std::shared_ptr<Commands::CommandInterface> offCommand)
		{
			m_OnCommands[slot]  = onCommand;
			m_OffCommands[slot] = offCommand;
		}

		/* Indicate which On button was pressed */
		void OnButtonWasPushed(size_t slot)
		{
			m_OnCommands[slot]->Execute();
		}

		/* Indicate which Off button was pressed */
		void OffButtonWasPushed(size_t slot)
		{
			m_OffCommands[slot]->Execute();
		}

		std::string ToString()
		{
			std::string msg = "\n----- Remote Control -----\n";
			for (size_t index=0; index < 7; index ++)
			{
				msg += "[ slot " + std::to_string(index) + " ] " + m_OnCommands[index]->GetName() + " / " + m_OffCommands[index]->GetName() + "\n";
			}
			return msg;
		}

	private:
		std::array<std::shared_ptr<Commands::CommandInterface>, 7> m_OnCommands;
		std::array<std::shared_ptr<Commands::CommandInterface>, 7> m_OffCommands;

	};
}
