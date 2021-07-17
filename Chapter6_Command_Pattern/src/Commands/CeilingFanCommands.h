#pragma once
#include "CommandInterface.h"
#include "Objects/CeilingFan.h"

namespace Commands
{
	namespace CeilingFanCommands
	{
		class CeilingFanLowCommand : public CommandInterface
		{
		public:
			CeilingFanLowCommand(std::shared_ptr<Objects::CeilingFan> fan) : m_Fan{ fan } {}
			void Execute() override { m_Fan->Low(); }
			std::string GetName() const override { return m_Fan->GetName() + "Low Speed Command"; }
		private:
			std::shared_ptr<Objects::CeilingFan> m_Fan;
		};

		class CeilingFanMediumCommand : public CommandInterface
		{
		public:
			CeilingFanMediumCommand(std::shared_ptr<Objects::CeilingFan> fan) : m_Fan{ fan } {}
			void Execute() override { m_Fan->Medium(); }
			std::string GetName() const override { return m_Fan->GetName() + " Medium Speed Command"; }
		private:
			std::shared_ptr<Objects::CeilingFan> m_Fan;
		};

		class CeilingFanHighCommand : public CommandInterface
		{
		public:
			CeilingFanHighCommand(std::shared_ptr<Objects::CeilingFan> fan) : m_Fan{ fan } {}
			void Execute() override { m_Fan->High(); }
			std::string GetName() const override { return m_Fan->GetName() + " High Speed Command"; }
		private:
			std::shared_ptr<Objects::CeilingFan> m_Fan;
		};

		class CeilingFanOnCommand : public CommandInterface
		{
		public:
			CeilingFanOnCommand(std::shared_ptr<Objects::CeilingFan> fan) : m_Fan{ fan } {}
			void Execute() override { m_Fan->On(); }
			std::string GetName() const override { return m_Fan->GetName() + " is On"; }
		private:
			std::shared_ptr<Objects::CeilingFan> m_Fan;
		};

		class CeilingFanOffCommand : public CommandInterface
		{
		public:
			CeilingFanOffCommand(std::shared_ptr<Objects::CeilingFan> fan) : m_Fan{ fan } {}
			void Execute() override { m_Fan->Off(); }
			std::string GetName() const override { return m_Fan->GetName() + " is On"; }
		private:
			std::shared_ptr<Objects::CeilingFan> m_Fan;
		};
	}
}
