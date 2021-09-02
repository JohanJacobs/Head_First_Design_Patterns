#pragma once
#include <vector>
#include "BeatModelInterface/BeatModelInterface.h"
#include "BeatObserver/BeatObserver.h"
#include "BPMObserver/BPMObserver.h"

namespace MVC
{
	class BeatModel: public BeatModelInterface
	{
	public:
		void Initialize() override;
		void On() override;
		void Off() override;
		void SetBPM(int bpm) override;
		int GetBPM() override;

		void RegisterBeatObserver(BeatObserver* o) override;
		void RemoveObserver(BeatObserver* o) override;

		void RegisterBPMObserver(BPMObserver* o) override;
		void RemoveObserver(BPMObserver* o) override;

		void NotifyObservers();
		void NotifyBPMObservers();

		~BeatModel();
	private:
		std::vector<BeatObserver*> m_BeatObservers;
		std::vector<BPMObserver*> m_BPMObservers;
		int m_BPM{ 90 };

	};
}