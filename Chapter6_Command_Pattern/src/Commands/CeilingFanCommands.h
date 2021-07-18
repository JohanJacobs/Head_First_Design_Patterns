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
			CeilingFanLowCommand(Ref<Objects::CeilingFan> fan) : m_Fan{ fan }, m_PrevSpeed{ Objects::CeilingFanSpeed::off } {}
			void Execute() override { m_PrevSpeed = m_Fan->GetSpeed(); m_Fan->Low(); }
			void Undo() override {
				switch (m_PrevSpeed)
				{
					case Objects::CeilingFanSpeed::high:
					{
						m_Fan->High();
						break;
					}
					case Objects::CeilingFanSpeed::medium:
					{
						m_Fan->Medium();
						break;
					}
					case Objects::CeilingFanSpeed::low:
					{
						m_Fan->Low();
						break;
					}
				}
			}

			std::string GetName() const override { return m_Fan->GetName() + "Low Speed Command"; }
		private:
			Ref<Objects::CeilingFan> m_Fan;
			Objects::CeilingFanSpeed m_PrevSpeed; // Undo State

		};

		class CeilingFanMediumCommand : public CommandInterface
		{
		public:
			CeilingFanMediumCommand(Ref<Objects::CeilingFan> fan) : m_Fan{ fan }, m_PrevSpeed{Objects::CeilingFanSpeed::off} {}
			void Execute() override { m_Fan->Medium(); }
			void Undo() override {
				switch (m_PrevSpeed)
				{
					case Objects::CeilingFanSpeed::high:
					{
						m_Fan->High();
						break;
					}
					case Objects::CeilingFanSpeed::medium:
					{
						m_Fan->Medium();
						break;
					}
					case Objects::CeilingFanSpeed::low:
					{
						m_Fan->Low();
						break;
					}
				}
			}
			std::string GetName() const override { return m_Fan->GetName() + " Medium Speed Command"; }
		private:
			Ref<Objects::CeilingFan> m_Fan;
			Objects::CeilingFanSpeed m_PrevSpeed;
		};

		class CeilingFanHighCommand : public CommandInterface
		{
		public:
			CeilingFanHighCommand(Ref<Objects::CeilingFan> fan) : m_Fan{ fan }, m_PrevSpeed{ Objects::CeilingFanSpeed::off } {}
			void Execute() override { m_Fan->High(); }
			void Undo() override {
				switch (m_PrevSpeed)
				{
					case Objects::CeilingFanSpeed::high:
					{
						m_Fan->High();
						break;
					}
					case Objects::CeilingFanSpeed::medium:
					{
						m_Fan->Medium();
						break;
					}
					case Objects::CeilingFanSpeed::low:
					{
						m_Fan->Low();
						break;
					}
				}
			}
			std::string GetName() const override { return m_Fan->GetName() + " High Speed Command"; }
		private:
			Ref<Objects::CeilingFan> m_Fan;
			Objects::CeilingFanSpeed m_PrevSpeed;
		};

		class CeilingFanOnCommand : public CommandInterface
		{
		public:
			CeilingFanOnCommand(Ref<Objects::CeilingFan> fan) : m_Fan{ fan } {}
			void Execute() override { m_Fan->On(); }
			void Undo() override { m_Fan->Off(); }
			std::string GetName() const override { return m_Fan->GetName() + " is On"; }
		private:
			Ref<Objects::CeilingFan> m_Fan;
		};

		class CeilingFanOffCommand : public CommandInterface
		{
		public:
			CeilingFanOffCommand(Ref<Objects::CeilingFan> fan) : m_Fan{ fan } {}
			void Execute() override { m_Fan->Off(); }
			void Undo() override { m_Fan->On(); }
			std::string GetName() const override { return m_Fan->GetName() + " is On"; }
		private:
			Ref<Objects::CeilingFan> m_Fan;
		};
	}
}
