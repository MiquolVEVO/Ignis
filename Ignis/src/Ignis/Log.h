#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Ignis {

	class IGNIS_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr < spdlog::logger> s_CoreLogger;
		static std::shared_ptr < spdlog::logger> s_ClientLogger;

	};

}

//Core Log Macros
#define IG_CORE_TRACE(...) ::Ignis::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define IG_CORE_INFO(...)  ::Ignis::Log::GetCoreLogger()->info(__VA_ARGS__)
#define IG_CORE_WARN(...)  ::Ignis::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define IG_CORE_ERROR(...) ::Ignis::Log::GetCoreLogger()->error(__VA_ARGS__)
#define IG_CORE_FATAL(...) ::Ignis::Log::GetCoreLogger()->fatal(__VA_ARGS__)

//Client Log Macros
#define IG_TRACE(...)      ::Ignis::Log::GetClientLogger()->trace(__VA_ARGS__)
#define IG_INFO(...)       ::Ignis::Log::GetClientLogger()->info(__VA_ARGS__)
#define IG_WARN(...)       ::Ignis::Log::GetClientLogger()->warn(__VA_ARGS__)
#define IG_ERROR(...)      ::Ignis::Log::GetClientLogger()->error(__VA_ARGS__)
#define IG_FATAL(...)      ::Ignis::Log::GetClientLogger()->fatal(__VA_ARGS__)