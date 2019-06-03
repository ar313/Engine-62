#pragma once

namespace Engine {

	class __declspec(dllexport) Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	// to be defined in client
	Application* CreateApplication();
}
