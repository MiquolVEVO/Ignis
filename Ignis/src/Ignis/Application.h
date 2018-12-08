#pragma once

#include "Core.h"

namespace Ignis {

	class IGNIS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in client
	Application* CreateApplication();

}