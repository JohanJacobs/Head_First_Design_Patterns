#pragma once
#include "CommandInterface.h"
#include "Objects/Stereo.h"
#include "core/Base.h"

namespace Commands
{
	namespace StereoCommands
	{
		class StereoOnCommand : public CommandInterface
		{
		public:
			StereoOnCommand(Ref<Objects::Stereo> stereo) : m_Stereo{ stereo } {  }
			void Execute() override { m_Stereo->On(); }
			void Undo() override { m_Stereo->Off(); }
			std::string GetName() const override { return m_Stereo->GetName() + " on with CD"; }
		private:
			Ref<Objects::Stereo> m_Stereo;
		};

		class StereoOffCommand : public CommandInterface
		{
		public:
			StereoOffCommand(Ref<Objects::Stereo> stereo) : m_Stereo{ stereo } {  }
			void Execute() override { m_Stereo->Off(); }
			void Undo() override { m_Stereo->On(); }
			std::string GetName() const override { return m_Stereo->GetName() + " on with CD"; }
		private:
			Ref<Objects::Stereo> m_Stereo;
		};

		class StereoOnWithCDCommand : public CommandInterface
		{
		public:
			StereoOnWithCDCommand(Ref<Objects::Stereo> stereo) : m_Stereo{ stereo } {  }
			void Execute() override { m_Stereo->On();  m_Stereo->SetCD(); }
			void Undo() override { m_Stereo->Off();}
			std::string GetName() const override {return m_Stereo->GetName() + " on with CD";}
		private:
			Ref<Objects::Stereo> m_Stereo;
		};

		class StereoOnWithDVDCommand : public CommandInterface
		{
		public:
			StereoOnWithDVDCommand(Ref<Objects::Stereo> stereo) : m_Stereo{ stereo } { }
			void Execute() override { m_Stereo->On(); m_Stereo->SetDVD(); }
			void Undo() override { m_Stereo->Off(); }
			std::string GetName() const override { return m_Stereo->GetName() + " on with DVD"; }
		private:
			Ref<Objects::Stereo> m_Stereo;
		};

		class StereoOnWithRadioCommand : public CommandInterface
		{
		public:
			StereoOnWithRadioCommand(Ref<Objects::Stereo> stereo) :m_Stereo{ stereo } { }
			void Execute() override { m_Stereo->On();  m_Stereo->SetDVD(); }
			void Undo() override { m_Stereo->Off(); }
			std::string GetName() const override { return m_Stereo->GetName() + " on with Radio"; }
		private:
			Ref<Objects::Stereo> m_Stereo;
		};

		class StereoVolumeCommand : public CommandInterface
		{
		public:
			StereoVolumeCommand(Ref<Objects::Stereo> stereo, int volume) :m_Stereo{ stereo }, m_Volume{ volume } {}
			void Execute() override { m_PrevVolume = m_Stereo->GetVolume(); m_Stereo->SetVolume(m_Volume); }
			void Undo() override { m_Stereo->SetVolume(m_PrevVolume); }
			std::string GetName() const override { return m_Stereo->GetName() + " set Volume"; }
		private:
			Ref<Objects::Stereo> m_Stereo;
			int m_Volume{ 0 };
			int m_PrevVolume{ 0 };
		};
	}
}