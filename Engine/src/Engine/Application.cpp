#include "Application.h"

#include "Events/ApplicationEvent.h"
#include "Log.h"

namespace Engine {
	Application::Application()
	{
	}


	Application::~Application()
	{
	}

	void Application::Run()
	{
		WindowResizeEvent e(1280, 720);
		ENGINE_TRACE(e);

		while (true) {
			

		}
	}
}