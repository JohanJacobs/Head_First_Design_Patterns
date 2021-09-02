#pragma once
#include <memory>
#include "BeatObserver/BeatObserver.h"
#include "BPMObserver/BPMObserver.h"

namespace MVC
{
	class BeatModelInterface
	{
	public:
		// methods the  controller use to direct the model based on user interaction
		virtual void Initialize()=0;
		virtual void On() = 0;
		virtual void Off() = 0;
		virtual void SetBPM(int bpm) = 0;
		virtual int GetBPM() = 0;

		// methods to allow the view and controller to get state and to become observers.
		virtual void RegisterBeatObserver(BeatObserver* o) = 0;
		virtual void RemoveObserver(BeatObserver* o) = 0;

		virtual void RegisterBPMObserver(BPMObserver* o) = 0;
		virtual void RemoveObserver(BPMObserver* o) = 0;

		virtual ~BeatModelInterface();
	};
}
