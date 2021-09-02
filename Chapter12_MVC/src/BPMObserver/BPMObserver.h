#pragma once
namespace MVC
{
	class BPMObserver
	{
	public:
		virtual void UpdateBPM() = 0;
		virtual ~BPMObserver()
		{

		}
	};
}
