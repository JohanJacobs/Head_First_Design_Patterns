#pragma once
#include <memory>
#include "BeatModel/BeatModel.h"
#include "BeatController/BeatController.h"

namespace MVC
{
	class DJTestDrive
	{
	public:
		DJTestDrive()
		{
			std::shared_ptr<BeatModel> model = std::make_shared<BeatModel>();
			std::shared_ptr<ControllerInterface>  controller = std::make_shared<BeatController>(model);
			controller->Start();
			controller->IncreaseBPM();
			controller->IncreaseBPM();
			controller->SetBPM(50);
			controller->DecreaseBPM();
			controller->Stop();
		}
	private:
	};
}