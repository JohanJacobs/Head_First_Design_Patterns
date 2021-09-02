#pragma once
namespace MVC
{
	class ControllerInterface
	{
	public:
		virtual void Start() = 0;
		virtual void Stop() = 0;
		virtual void IncreaseBPM() = 0;
		virtual void DecreaseBPM() = 0;
		virtual void SetBPM(int bpm) = 0;
		virtual ~ControllerInterface()
		{
		}

	};
}