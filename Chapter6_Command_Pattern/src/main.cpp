#include <iostream>
#include <memory>

#include "Core/Base.h"

#include "Objects/Lights.h"
#include "Commands/LightCommands.h"

#include "Objects/Stereo.h"
#include "Commands/StereoCommand.h"

#include "Objects/CeilingFan.h"
#include "Commands/CeilingFanCommands.h"

#include "Objects/GarageDoor.h"
#include "Commands/GarageCommands.h"

// used for the remote control Example 
#include "RemoteControl/RemoteControl.h"
#include "RemoteControl/RemoteTest.h"

// For the Remote control with Undo 
#include "RemoteControlUndo/RemoteControlUndo.h"

void TestCommand()
{
	Ref<Objects::Light> light = std::make_shared<Objects::Light>("Living Room");
	Ref<Commands::LightCommands::LightOnCommand> lightOnCommand = CreateRef<Commands::LightCommands::LightOnCommand>(light);
	Ref<Commands::LightCommands::LightOffCommand> lightOffCommand = CreateRef<Commands::LightCommands::LightOffCommand>(light);
	Remote::RemoteTest rcTest;
	rcTest.SetCommand(lightOnCommand);
	rcTest.buttonWasPressed();
	rcTest.SetCommand(lightOffCommand);
	rcTest.buttonWasPressed();
}

void RemoteControl()
{
	std::cout << "Remote Control\n";
	// create the light commands
	Ref<Objects::Light> LivingRoomLight = CreateRef<Objects::Light>("Living Room");
	Ref<Commands::LightCommands::LightOnCommand> LivingRoomLightOnCommand = CreateRef<Commands::LightCommands::LightOnCommand>(LivingRoomLight);
	Ref<Commands::LightCommands::LightOffCommand> LivingRoomLightOffCommand = CreateRef<Commands::LightCommands::LightOffCommand>(LivingRoomLight);

	Ref<Objects::Light> KitchenRoomLight = CreateRef<Objects::Light>("Kitchen");
	Ref<Commands::LightCommands::LightOnCommand> KitchenRoomLightOnCommand = CreateRef<Commands::LightCommands::LightOnCommand>(KitchenRoomLight);
	Ref<Commands::LightCommands::LightOffCommand> KitchenRoomLightOffCommand = CreateRef<Commands::LightCommands::LightOffCommand>(KitchenRoomLight);

	// create the Stereo commands
	Ref<Objects::Stereo> stereo = CreateRef<Objects::Stereo>("Living Room");
	Ref<Commands::StereoCommands::StereoOnWithCDCommand> StereoOnCDCommand = CreateRef<Commands::StereoCommands::StereoOnWithCDCommand>(stereo);
	Ref<Commands::StereoCommands::StereoOffCommand> StereoOffCommand = CreateRef<Commands::StereoCommands::StereoOffCommand>(stereo);

	// create the Ceiling commands
	Ref<Objects::CeilingFan> ceilingFan = CreateRef<Objects::CeilingFan>("Living Room");
	Ref<Commands::CeilingFanCommands::CeilingFanOnCommand> ceilingFanOnCommand = CreateRef<Commands::CeilingFanCommands::CeilingFanOnCommand>(ceilingFan);
	Ref<Commands::CeilingFanCommands::CeilingFanOffCommand> ceilingFanOffCommand = CreateRef<Commands::CeilingFanCommands::CeilingFanOffCommand>(ceilingFan);

	// create the Garage commands
	Ref<Objects::GarageDoor> garageDoor = CreateRef<Objects::GarageDoor>("Main Garage");
	Ref<Commands::GarageCommands::GarageOpenCommand> garageOpen = CreateRef<Commands::GarageCommands::GarageOpenCommand>(garageDoor);
	Ref<Commands::GarageCommands::GarageCloseCommand> garageClose = CreateRef<Commands::GarageCommands::GarageCloseCommand>(garageDoor);

	// setup remote controller
	Remote::RemoteControl rc;
	rc.SetCommand(0, LivingRoomLightOnCommand, LivingRoomLightOffCommand);
	rc.SetCommand(1, KitchenRoomLightOnCommand, KitchenRoomLightOffCommand);
	rc.SetCommand(2, ceilingFanOnCommand, ceilingFanOffCommand);
	rc.SetCommand(3, StereoOnCDCommand, StereoOffCommand);

	std::cout << rc.ToString() << "\n";

	// execute the commands 
	rc.OnButtonWasPushed(0);
	rc.OffButtonWasPushed(0);
	rc.OnButtonWasPushed(1);
	rc.OffButtonWasPushed(1);
	rc.OnButtonWasPushed(2);
	rc.OffButtonWasPushed(2);
	rc.OnButtonWasPushed(3);
	rc.OffButtonWasPushed(3);
}

void RemoteControlUndo()
{
	std::cout << "Undo Remote Control\n";
	// create the light commands
	Ref<Objects::Light> LivingRoomLight = CreateRef<Objects::Light>("Living Room");
	Ref<Commands::LightCommands::LightOnCommand> LivingRoomLightOnCommand = CreateRef<Commands::LightCommands::LightOnCommand>(LivingRoomLight);
	Ref<Commands::LightCommands::LightOffCommand> LivingRoomLightOffCommand = CreateRef<Commands::LightCommands::LightOffCommand>(LivingRoomLight);

	Ref<Objects::Light> KitchenRoomLight = CreateRef<Objects::Light>("Kitchen");
	Ref<Commands::LightCommands::LightOnCommand> KitchenRoomLightOnCommand = CreateRef<Commands::LightCommands::LightOnCommand>(KitchenRoomLight);
	Ref<Commands::LightCommands::LightOffCommand> KitchenRoomLightOffCommand = CreateRef<Commands::LightCommands::LightOffCommand>(KitchenRoomLight);

	// create the Stereo commands
	Ref<Objects::Stereo> stereo = CreateRef<Objects::Stereo>("Living Room");
	Ref<Commands::StereoCommands::StereoOnWithCDCommand> StereoOnCDCommand = CreateRef<Commands::StereoCommands::StereoOnWithCDCommand>(stereo);
	Ref<Commands::StereoCommands::StereoOffCommand> StereoOffCommand = CreateRef<Commands::StereoCommands::StereoOffCommand>(stereo);

	// create the Ceiling commands
	Ref<Objects::CeilingFan> ceilingFan = CreateRef<Objects::CeilingFan>("Living Room");
	Ref<Commands::CeilingFanCommands::CeilingFanOnCommand> ceilingFanOnCommand = CreateRef<Commands::CeilingFanCommands::CeilingFanOnCommand>(ceilingFan);
	Ref<Commands::CeilingFanCommands::CeilingFanOffCommand> ceilingFanOffCommand = CreateRef<Commands::CeilingFanCommands::CeilingFanOffCommand>(ceilingFan);

	// create the Garage commands
	Ref<Objects::GarageDoor> garageDoor = CreateRef<Objects::GarageDoor>("Main Garage");
	Ref<Commands::GarageCommands::GarageOpenCommand> garageOpen = CreateRef<Commands::GarageCommands::GarageOpenCommand>(garageDoor);
	Ref<Commands::GarageCommands::GarageCloseCommand> garageClose = CreateRef<Commands::GarageCommands::GarageCloseCommand>(garageDoor);

	// setup remote controller
	Remote::RemoteControlUndo rc;
	rc.SetCommand(0, LivingRoomLightOnCommand, LivingRoomLightOffCommand);
	rc.SetCommand(1, KitchenRoomLightOnCommand, KitchenRoomLightOffCommand);
	rc.SetCommand(2, ceilingFanOnCommand, ceilingFanOffCommand);
	rc.SetCommand(3, StereoOnCDCommand, StereoOffCommand);

	std::cout << rc.ToString() << "\n";

	// execute the commands 
	rc.OnButtonWasPushed(0);
	rc.OffButtonWasPushed(0);
	rc.UndoButtonWasPushed(0);

	rc.OnButtonWasPushed(1);
	rc.OffButtonWasPushed(1);
	rc.UndoButtonWasPushed(1);

	rc.OnButtonWasPushed(2);
	rc.OffButtonWasPushed(2);
	rc.UndoButtonWasPushed(2);

	rc.OnButtonWasPushed(3);
	rc.OffButtonWasPushed(3);
	rc.UndoButtonWasPushed(3);
}

int main()
{
	std::cout << "Hello Head First Design Patterns!\n";
	std::cout << "Chapter 6 - Command Pattern!\n";
	
	// test command with the test remote controller 
	//TestCommand(); // uncomment to run the test remote controller.

	// Remote Control
	// RemoteControl();

	// Remote Control with undo 
	RemoteControlUndo();

}