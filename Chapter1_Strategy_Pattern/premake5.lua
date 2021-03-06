project "Chapter1_StrategyPattern"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	targetdir "%{wks.location}/bin/%{cfg.buildcfg}/%{prj.name}"
	objdir "%{wks.location}/bin-int/%{cfg.buildcfg}/%{prj.name}"
	
	files 
	{
		"src/**.h",
		"src/**.cpp"
	}
	
	filter "system:windows"
		systemversion "latest"
		
	filter "configurations:Debug"
		
		defines {"DEBUG"}
		symbols "On"
	filter "configurations:Release"
		defines {"NDEBUG"}
		optimize "On"