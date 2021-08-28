#pragma once
#include <memory>
#include <string>
namespace DuckSim
{	
	class Observer; // forward declaration
	class QuackObservable
	{
	public:
		virtual void RegisterObserver(std::shared_ptr<Observer> observer) = 0;
		virtual void NotifyObservers() = 0;
		virtual std::string GetName() = 0;
		virtual ~QuackObservable();

	};
}