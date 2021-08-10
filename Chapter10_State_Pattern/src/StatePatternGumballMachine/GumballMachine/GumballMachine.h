#pragma once
#include "../States/StateInterface.h"

class GumballMachine
{
public:
	GumballMachine(int count=0);

	~GumballMachine();

	void SetState(StateInterface* newState);

	StateInterface* GetHasQuarterState();
	StateInterface* GetNoQuarterState();
	StateInterface* GetSoldState();;
	StateInterface* GetSoldOutState();;

	void InsertQuarter();
	
	void EjectQuarter();
	
	void TurnCrank();
	
	void ReleaseBall();

	int GetCount();
	
	void PrintState();
private:
	int m_Count;
	StateInterface* m_CurrentState;
	StateInterface* m_HasQuarterState;
	StateInterface* m_NoQuarterState;
	StateInterface* m_SoldState;
	StateInterface* m_SoldOutState;
};
