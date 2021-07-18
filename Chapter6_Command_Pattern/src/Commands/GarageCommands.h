#pragma once
#include "CommandInterface.h"
#include "Objects/GarageDoor.h"
namespace Commands
{
	namespace GarageCommands
	{
		class GarageOpenCommand : public CommandInterface
		{
		public:
			GarageOpenCommand(std::shared_ptr<Objects::GarageDoor> door) :m_Door{ door } {}
			void Execute() override { m_Door->Open(); }
			void Undo() override { m_Door->Close(); }
			std::string GetName() const override { return m_Door->GetName() + " open"; }
		private:
			std::shared_ptr<Objects::GarageDoor> m_Door;
		};

		class GarageCloseCommand : public CommandInterface
		{
		public:
			GarageCloseCommand(std::shared_ptr<Objects::GarageDoor> door) :m_Door{ door } {}
			void Execute() override { m_Door->Close(); }
			void Undo() override { m_Door->Open(); }
			std::string GetName() const override { return m_Door->GetName() + " open"; }
		private:
			std::shared_ptr<Objects::GarageDoor> m_Door;
		};
	}
}
