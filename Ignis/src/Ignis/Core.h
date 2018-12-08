#pragma once

#ifdef IG_PLATFORM_WINDOWS
	#ifdef IG_BUILD_DLL
		#define IGNIS_API __declspec(dllexport)
	#else
		#define IGNIS_API __declspec(dllimport)
	#endif
#else
	#error Ignis only supports Windows!
#endif