#pragma once
#include <memory>

#include "QuackObservable/QuackObservable.h"

namespace DuckSim
{
	class Observer
	{
	public:
		virtual void Update(QuackObservable* duck)=0;
	};
}