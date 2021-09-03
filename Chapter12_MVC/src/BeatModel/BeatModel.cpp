#include "BeatModel.h"
#include <iostream>
#include <iostream>
namespace MVC
{

	void BeatModel::Initialize()
	{
		std::cout << "BeatModel::Initialize(): Setting up Midi\n";
		std::cout << "BeatModel::Initialize(): Build Track and Start\n";
	}

	void BeatModel::On()
	{
		SetBPM(90);
	}

	void BeatModel::Off()
	{
		SetBPM(0);
	}

	void BeatModel::SetBPM(int bpm)
	{
		m_BPM = bpm;
		std::cout << "BeatModel::SetBPM: Setting Beats per minute to " << bpm << "\n";
		NotifyObservers();
	}

	int BeatModel::GetBPM()
	{
		return m_BPM;
	}

	void BeatModel::RegisterBeatObserver(BeatObserver* o)
	{
		m_BeatObservers.push_back(o);
	}

	void BeatModel::RemoveObserver(BeatObserver* o)
	{
		std::cout << "Not implemented - void BeatModel::RemoveObserver(std::shared_ptr<BeatObserver> o)\n";
	}

	void BeatModel::NotifyObservers()
	{
		std::cout << "void BeatModel::NotifyObservers()\n";
		for (auto o: m_BeatObservers)
		{
			o->UpdateBeat();
		}
	}

	void BeatModel::NotifyBPMObservers()
	{
		std::cout << "void BeatModel::NotifyBPMObservers()\n";
		for (auto o : m_BPMObservers)
		{
			o->UpdateBPM();
		}
	}

	void BeatModel::RegisterBPMObserver(BPMObserver* o)
	{
		m_BPMObservers.push_back(o);
	}

	void BeatModel::RemoveObserver(BPMObserver* o)
	{
		std::cout << "void BeatModel::RemoveObserver(BPMObserver* o): Not implemented - void BeatModel::RemoveObserver(BPMObserver* o)\n";
	}

	BeatModel::~BeatModel()
	{

	}

}