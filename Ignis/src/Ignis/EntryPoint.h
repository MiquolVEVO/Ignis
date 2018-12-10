#pragma once

#ifdef IG_PLATFORM_WINDOWS

extern Ignis::Application* Ignis::CreateApplication();

int main(int argc, char** argv)
{
	Ignis::Log::Init();
	IG_CORE_WARN("Initialized Log!");
	IG_INFO("Hello!");

	auto app = Ignis::CreateApplication();
	app->Run();
	delete app;
}

#endif