#include "BeatModel.h"
#include <iostream>

namespace MVC
{

	void BeatModel::Initialize()
	{
		std::cout << "Setting up Midi\n";
		std::cout << "Build Track and Start\n";
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
		std::cout << "Setting Beats per minute to " << bpm << "\n";
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
		for (auto o: m_BeatObservers)
		{
			o->UpdateBeat();
		}
	}

	void BeatModel::NotifyBPMObservers()
	{
		for (auto o : m_BPMObservers)
		{
			o->UpdateBPM();
		}
	}

	void BeatModel::RegisterBPMObserver(BPMObserver* o)
	{
		throw std::logic_error("The method or operation is not implemented.");
	}

	void BeatModel::RemoveObserver(BPMObserver* o)
	{
		throw std::logic_error("The method or operation is not implemented.");
	}

	BeatModel::~BeatModel()
	{

	}

}