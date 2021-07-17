#pragma once
#include "CommandInterface.h"
#include "Objects/Stereo.h"
namespace Commands
{
	namespace StereoCommands
	{
		class StereoOnCommand : public CommandInterface
		{
		public:
			StereoOnCommand(std::shared_ptr<Objects::Stereo> stereo) : m_Stereo{ stereo } {  }
			void Execute() override { m_Stereo->On(); }
			std::string GetName() const override { return m_Stereo->GetName() + " on with CD"; }
		private:
			std::shared_ptr<Objects::Stereo> m_Stereo;
		};

		class StereoOffCommand : public CommandInterface
		{
		public:
			StereoOffCommand(std::shared_ptr<Objects::Stereo> stereo) : m_Stereo{ stereo } {  }
			void Execute() override { m_Stereo->Off(); }
			std::string GetName() const override { return m_Stereo->GetName() + " on with CD"; }
		private:
			std::shared_ptr<Objects::Stereo> m_Stereo;
		};

		class StereoOnWithCDCommand : public CommandInterface
		{
		public:
			StereoOnWithCDCommand(std::shared_ptr<Objects::Stereo> stereo) : m_Stereo{ stereo } {  }
			void Execute() override { m_Stereo->On();  m_Stereo->SetCD(); }
			std::string GetName() const override {return m_Stereo->GetName() + " on with CD";}
		private:
			std::shared_ptr<Objects::Stereo> m_Stereo;
		};

		class StereoOnWithDVDCommand : public CommandInterface
		{
		public:
			StereoOnWithDVDCommand(std::shared_ptr<Objects::Stereo> stereo) : m_Stereo{ stereo } { }
			void Execute() override { m_Stereo->On(); m_Stereo->SetDVD(); }
			std::string GetName() const override { return m_Stereo->GetName() + " on with DVD"; }
		private:
			std::shared_ptr<Objects::Stereo> m_Stereo;
		};

		class StereoOnWithRadioCommand : public CommandInterface
		{
		public:
			StereoOnWithRadioCommand(std::shared_ptr<Objects::Stereo> stereo) :m_Stereo{ stereo } { }
			void Execute() override { m_Stereo->On();  m_Stereo->SetDVD(); }
			std::string GetName() const override { return m_Stereo->GetName() + " on with Radio"; }
		private:
			std::shared_ptr<Objects::Stereo> m_Stereo;
		};

		class StereoVolumeCommand : public CommandInterface
		{
		public:
			StereoVolumeCommand(std::shared_ptr<Objects::Stereo> stereo, int volume) :m_Stereo{ stereo }, m_Volume{ volume } {}
			void Execute() override { m_Stereo->SetVolume(m_Volume); }
			std::string GetName() const override { return m_Stereo->GetName() + " set Volume"; }
		private:
			std::shared_ptr<Objects::Stereo> m_Stereo;
			int m_Volume{ 0 };
		};
	}
}