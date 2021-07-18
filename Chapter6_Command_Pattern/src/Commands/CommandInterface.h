#pragma once
#include <iostream>
#include <string>

/*
	Interface for commands 
	All commands need to use this as the base class 
*/

namespace Commands
{
	class CommandInterface
	{
	public:
		virtual void Execute() = 0; // execute the command 
		virtual void Undo() = 0;	// unod the command
		virtual std::string GetName() const = 0;
		virtual ~CommandInterface() = default;
	};
}

