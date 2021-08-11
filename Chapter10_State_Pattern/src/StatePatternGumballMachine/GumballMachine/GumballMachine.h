#pragma once
#include <memory>
#include "../States/StateInterface.h"

class GumballMachine
	:public std::enable_shared_from_this<GumballMachine>
{
public:
	GumballMachine(int count=0);

	~GumballMachine();

	void SetState(std::shared_ptr<StateInterface> newState);
	void SetupStates();
	std::shared_ptr<StateInterface> GetHasQuarterState();
	std::shared_ptr<StateInterface> GetNoQuarterState();
	std::shared_ptr<StateInterface> GetSoldState();;
	std::shared_ptr<StateInterface> GetSoldOutState();;

	void InsertQuarter();
	
	void EjectQuarter();
	
	void TurnCrank();
	
	void ReleaseBall();

	int GetCount();
	
	void PrintState();
private:
	int m_Count;
	std::shared_ptr<StateInterface> m_CurrentState;
	std::shared_ptr<StateInterface> m_HasQuarterState;
	std::shared_ptr<StateInterface> m_NoQuarterState;
	std::shared_ptr<StateInterface> m_SoldState;
	std::shared_ptr<StateInterface> m_SoldOutState;
};
