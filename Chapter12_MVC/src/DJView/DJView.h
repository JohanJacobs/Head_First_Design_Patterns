#pragma once
#include <iostream>
#include "BeatModelInterface/BeatModelInterface.h"
#include "ControllerInterface/ControllerInterface.h"
#include "BPMObserver/BPMObserver.h"
#include "BeatObserver/BeatObserver.h"

namespace MVC
{
	class DJView :public BeatObserver,  BPMObserver, std::enable_shared_from_this<DJView>
	{
	public:
		DJView(ControllerInterface* controller, BeatModelInterface* model);

		void UpdateBPM();

		void UpdateBeat();

		void ActionSetBPM(int bpm);
		void ActionIncreaseBPM();
		void ActionDecreaseBPM();

		std::shared_ptr<DJView> getptr();
		
	private:
		BeatModelInterface* m_Model;
		ControllerInterface* m_Controller;

	};
}