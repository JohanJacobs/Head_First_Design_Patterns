#pragma once
#include "ControllerInterface/ControllerInterface.h"
#include "DJView/DJView.h"
#include "BeatModelInterface/BeatModelInterface.h"

namespace MVC
{
	class BeatController :public ControllerInterface, std::enable_shared_from_this<DJView>
	{
	public:
		void Start() override;
		void Stop() override;
		void IncreaseBPM() override;
		void DecreaseBPM() override;
		void SetBPM(int bpm) override;

		BeatController(std::shared_ptr<BeatModelInterface> model);
		~BeatController();

		std::shared_ptr<DJView> getptr() {
			return shared_from_this();
		}
	private:
		std::shared_ptr<BeatModelInterface> m_Model;
		std::shared_ptr<DJView> m_View;

	};
}