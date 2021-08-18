project "Chapter11_Proxy_Pattern_ProtectionProxy"
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