#include "BeatController.h"
namespace MVC
{

	void BeatController::Start()
	{
		m_Model->On();
	}

	void BeatController::Stop()
	{
		m_Model->Off();
	}

	void BeatController::IncreaseBPM()
	{
		m_Model->SetBPM(m_Model->GetBPM() + 1);
	}

	void BeatController::DecreaseBPM()
	{
		m_Model->SetBPM(m_Model->GetBPM() - 1);
	}

	void BeatController::SetBPM(int bpm)
	{
		m_Model->SetBPM(bpm);
	}

	BeatController::BeatController(std::shared_ptr<BeatModelInterface> model)
		:m_Model{model}
	{
		m_View = std::make_shared<DJView>(this, m_Model.get());

	}

	BeatController::~BeatController()
	{

	}

}