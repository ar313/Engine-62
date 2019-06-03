#pragma once

#ifdef ENGINE_PLATFORM_WINDOWS

extern Engine::Application* Engine::CreateApplication();
int main(int argc, char** argv)
{
	printf("Test");
	auto app = Engine::CreateApplication();
	app->Run();
	delete app;
}
#endif