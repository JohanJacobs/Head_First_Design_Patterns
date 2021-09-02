#include "DJView.h"

namespace MVC
{

	DJView::DJView(ControllerInterface* controller, BeatModelInterface* model) :m_Controller{ controller }, m_Model{ model }
	{
		// just make this pointers.
		//m_Model->RegisterBeatObserver(this);
		//m_Model->RegisterBPMObserver(this);
	}

	void DJView::UpdateBPM()
	{
		int bpm = m_Model->GetBPM();
		if (bpm == 0)
		{
			std::cout << "Offline\n";
		}
		else
		{
			std::cout << "Current BPM: " << bpm << "\n";
		}
	}

	void DJView::UpdateBeat()
	{
		std::cout << "BeatBar set value to 100\n";
	}

	void DJView::ActionSetBPM(int bpm)
	{
		m_Controller->SetBPM(bpm);
	}

	void DJView::ActionIncreaseBPM()
	{
		m_Controller->IncreaseBPM();
	}

	void DJView::ActionDecreaseBPM()
	{
		m_Controller->DecreaseBPM();
	}

	std::shared_ptr<MVC::DJView> DJView::getptr()
	{
		return shared_from_this();
	}

}