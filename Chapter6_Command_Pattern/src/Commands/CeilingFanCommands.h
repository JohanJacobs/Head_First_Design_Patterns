#pragma once
#include "CommandInterface.h"
#include "Objects/CeilingFan.h"
#include "Core/Base.h"

namespace Commands
{
	/* Ceiling fan command */
	namespace CeilingFanCommands
	{
		class CeilingFanLowCommand : public CommandInterface
		{
		public:
			CeilingFanLowCommand(Ref<Objects::CeilingFan> fan) : m_Fan{ fan } {}
			void Execute() override { m_Fan->Low(); }
			std::string GetName() const override { return m_Fan->GetName() + "Low Speed Command"; }
		private:
			Ref<Objects::CeilingFan> m_Fan;
		};

		class CeilingFanMediumCommand : public CommandInterface
		{
		public:
			CeilingFanMediumCommand(Ref<Objects::CeilingFan> fan) : m_Fan{ fan } {}
			void Execute() override { m_Fan->Medium(); }
			std::string GetName() const override { return m_Fan->GetName() + " Medium Speed Command"; }
		private:
			Ref<Objects::CeilingFan> m_Fan;
		};

		class CeilingFanHighCommand : public CommandInterface
		{
		public:
			CeilingFanHighCommand(Ref<Objects::CeilingFan> fan) : m_Fan{ fan } {}
			void Execute() override { m_Fan->High(); }
			std::string GetName() const override { return m_Fan->GetName() + " High Speed Command"; }
		private:
			Ref<Objects::CeilingFan> m_Fan;
		};

		class CeilingFanOnCommand : public CommandInterface
		{
		public:
			CeilingFanOnCommand(Ref<Objects::CeilingFan> fan) : m_Fan{ fan } {}
			void Execute() override { m_Fan->On(); }
			std::string GetName() const override { return m_Fan->GetName() + " is On"; }
		private:
			Ref<Objects::CeilingFan> m_Fan;
		};

		class CeilingFanOffCommand : public CommandInterface
		{
		public:
			CeilingFanOffCommand(Ref<Objects::CeilingFan> fan) : m_Fan{ fan } {}
			void Execute() override { m_Fan->Off(); }
			std::string GetName() const override { return m_Fan->GetName() + " is On"; }
		private:
			Ref<Objects::CeilingFan> m_Fan;
		};
	}
}
