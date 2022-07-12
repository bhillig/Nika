#pragma once

// Entrypoint for our application

#ifdef NK_PLATFORM_WINDOWS

extern Nika::Application* Nika::CreateApplication();

int main(int argc, char* argv[])
{
	auto app = Nika::CreateApplication();
	app->Run();
	delete app;
	return 0;
}
#else
	#error Nika currently only supports Windows! 
#endif // NK_PLATFORM_WINDOWS