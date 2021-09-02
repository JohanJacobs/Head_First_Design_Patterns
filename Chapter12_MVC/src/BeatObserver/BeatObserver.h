#pragma once
namespace MVC
{
	class BeatObserver
	{
	public:
		virtual void UpdateBeat() = 0;
		virtual ~BeatObserver()
		{

		}
	};
}
