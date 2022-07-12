#pragma once

#include "Core.h"

namespace Nika
{
	class NIKA_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	// to be defined in client
	Application* CreateApplication();
}

