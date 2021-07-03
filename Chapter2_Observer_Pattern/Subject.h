#pragma once
#include <memory>
#include <algorithm>
#include <vector>
#include <iostream>
#include "Observer.h"

/*
	Subject interface that allows observers to connect and get informed (push notification) of changes in state
*/
class Subject
{
public:
	Subject() = default;
	~Subject() = default;

	void RegisterObserver(Observer* observer)
	{
		// check if this observer is in the m_Observer data.
		auto result = std::find(std::begin(m_Observers), std::end(m_Observers), observer);
		if (result != std::end(m_Observers))
			return; // this observer exists, don't add it.

		// add the new observer
		m_Observers.push_back(observer);
		std::cout << "Subject Added: " << observer->GetName() << "\n";
	}

	void RemoveObserver(Observer* observer)
	{
		// find the observer
		auto result = std::find(std::begin(m_Observers), std::end(m_Observers), observer);
		if (result == std::end(m_Observers))
			return;

		// remove the observer
		m_Observers.erase(result);
		std::cout << "Subject Removed: " << observer->GetName() << "\n";
	}
private:
	virtual void NotifyObservers() = 0;

protected:
	std::vector<Observer*> m_Observers;
};
