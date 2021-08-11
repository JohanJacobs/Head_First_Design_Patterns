#include "GumballMachine.h"
#include "base.h"
#include "../states/NoQuarterState.h"
#include "../states/HasQuarterState.h"
#include "../states/SoldState.h"
#include "../states/SoldOutState.h"

GumballMachine::GumballMachine(int count) 
	: m_Count{ count }
{

}

GumballMachine::~GumballMachine()
{

}

void GumballMachine::SetupStates()
{
	std::shared_ptr<GumballMachine> thisPtr = shared_from_this();
	m_NoQuarterState = std::make_shared<NoQuarterState>(thisPtr);
	m_HasQuarterState = std::make_shared<HasQuarterState>(shared_from_this());
	m_SoldState = std::make_shared<SoldState>(shared_from_this());
	m_SoldOutState = std::make_shared<SoldOutState>(shared_from_this());

	if (m_Count > 0)
		m_CurrentState = m_NoQuarterState;
	else
		m_CurrentState = m_SoldOutState;
}
void GumballMachine::SetState(std::shared_ptr<StateInterface> newState)
{
	m_CurrentState = newState;
}

std::shared_ptr<StateInterface> GumballMachine::GetHasQuarterState()
{
	return m_HasQuarterState;
}

std::shared_ptr<StateInterface> GumballMachine::GetNoQuarterState()
{
	return m_NoQuarterState;
}

std::shared_ptr<StateInterface> GumballMachine::GetSoldState()
{
	return m_SoldState;
}

std::shared_ptr<StateInterface> GumballMachine::GetSoldOutState()
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
