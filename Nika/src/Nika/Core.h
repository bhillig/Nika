#pragma once

#ifdef NK_PLATFORM_WINDOWS
	#ifdef NK_BUILD_DLL
		#define NIKA_API __declspec(dllexport)
	#else	
		#define NIKA_API __declspec(dllimport)
	#endif
#else
	#error Nika currently only supports Windows! 
#endif