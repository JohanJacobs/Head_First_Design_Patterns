project "Chapter10_State_Pattern_Default"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	targetdir "%{wks.location}/bin/%{cfg.buildcfg}/%{prj.name}"
	objdir "%{wks.location}/bin-int/%{cfg.buildcfg}/%{prj.name}"
	
	files 
	{
		"src/DefaultGumballMachine/**.h",
		"src/DefaultGumballMachine/**.cpp"
	}

	includedirs
	{
		"src/core/"
	}
	
	filter "system:windows"
		systemversion "latest"
		
	filter "configurations:Debug"		
		defines {"DEBUG"}
		runtime "Debug"
		symbols "On"
		
	filter "configurations:Release"
		defines {"NDEBUG"}
		runtime "Release"
		optimize "On"

project "Chapter10_State_Pattern_StatePattern"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	targetdir "%{wks.location}/bin/%{cfg.buildcfg}/%{prj.name}"
	objdir "%{wks.location}/bin-int/%{cfg.buildcfg}/%{prj.name}"
	
	files 
	{
		"src/StatePatternGumballMachine/**.h",
		"src/StatePatternGumballMachine/**.cpp"		
	}

	includedirs
	{
		"src/core/"
	}
	
	filter "system:windows"
		systemversion "latest"
		
	filter "configurations:Debug"		
		defines {"DEBUG"}
		runtime "Debug"
		symbols "On"
		
	filter "configurations:Release"
		defines {"NDEBUG"}
		runtime "Release"
		optimize "On"

project "Chapter10_State_Pattern_WinnerState"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	targetdir "%{wks.location}/bin/%{cfg.buildcfg}/%{prj.name}"
	objdir "%{wks.location}/bin-int/%{cfg.buildcfg}/%{prj.name}"
	
	files 
	{
		"src/StatePatternGumballMachineWinnerState/**.h",
		"src/StatePatternGumballMachineWinnerState/**.cpp"		
	}

	includedirs
	{
		"src/core/"
	}
	
	filter "system:windows"
		systemversion "latest"
		
	filter "configurations:Debug"		
		defines {"DEBUG"}
		runtime "Debug"
		symbols "On"
		
	filter "configurations:Release"
		defines {"NDEBUG"}
		runtime "Release"
		optimize "On"		