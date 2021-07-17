#pragma once
#include "CommandInterface.h"

#include "Objects/Lights.h"

namespace Commands
{
	namespace LightCommands
	{
		/* Base class for light commands */
		class LightCommand : public CommandInterface
		{
		public:
			std::string GetName() const override { return "Light"; }
		};

		/* switch light on command */
		class LightOnCommand : public LightCommand
		{
		public:
			LightOnCommand(std::shared_ptr<Objects::Light> light) : m_Light{ light } { }
			std::string GetName() const override { return m_Light->GetName() + LightCommand::GetName() + " on";}
			void Execute() override{ m_Light->On(); }
		private:
			std::shared_ptr<Objects::Light> m_Light;
		};

		/* switch light off command */
		class LightOffCommand : public LightCommand
		{
		public:
			LightOffCommand(std::shared_ptr<Objects::Light> light) : m_Light{ light } {}
			std::string GetName() const override { return LightCommand::GetName() + " off"; }
			void Execute() override { m_Light->Off(); }
		private:
			std::shared_ptr<Objects::Light> m_Light;
		};
	}
}