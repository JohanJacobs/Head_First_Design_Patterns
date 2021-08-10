#include "GumballMachine.h"

#include "../states/NoQuarterState.h"
#include "../states/HasQuarterState.h"
#include "../states/SoldState.h"
#include "../states/SoldOutState.h"

GumballMachine::GumballMachine(int count) 
	: m_Count{ count }, 
	m_NoQuarterState{nullptr}, 
	m_HasQuarterState{nullptr},
	m_SoldState{nullptr},
	m_SoldOutState{nullptr}
{
	m_NoQuarterState = new NoQuarterState(this);
	m_HasQuarterState = new HasQuarterState(this);
	m_SoldState = new SoldState(this);
	m_SoldOutState = new SoldOutState(this);

	if (m_Count > 0)
		m_CurrentState = m_NoQuarterState;
}

GumballMachine::~GumballMachine()
{
	m_CurrentState = nullptr;
	delete m_NoQuarterState;
	delete m_HasQuarterState;
	delete m_SoldState;
	delete m_SoldOutState;
}

void GumballMachine::SetState(StateInterface* newState)
{
	m_CurrentState = newState;
}

StateInterface* GumballMachine::GetHasQuarterState()
{
	return m_HasQuarterState;
}

StateInterface* GumballMachine::GetNoQuarterState()
{
	return m_NoQuarterState;
}

StateInterface* GumballMachine::GetSoldState()
{
	return m_SoldState;
}

StateInterface* GumballMachine::GetSoldOutState()
{
	return m_SoldOutState;
}

void GumballMachine::InsertQuarter()
{
	m_CurrentState->InsertQuarter();
}

void GumballMachine::EjectQuarter()
{
	m_CurrentState->EjectQuarter();
}

void GumballMachine::TurnCrank()
{
	m_CurrentState->TurnCrank();
	m_CurrentState->Dispense();
}

void GumballMachine::ReleaseBall()
{
	std::cout << "A gumball comes rolling out the slot...\n";
	if (m_Count != 0)
		m_Count -= 1;
}

int GumballMachine::GetCount()
{
	return m_Count;
}

void GumballMachine::PrintState()
{
	std::cout << " ---- Gumball Machine State ----\n";
	std::cout << "Count: " << m_Count << "\n";
	std::cout << "Current State: " << m_CurrentState->GetName() << "\n";
	std::cout << " -------------------------------\n";
}
