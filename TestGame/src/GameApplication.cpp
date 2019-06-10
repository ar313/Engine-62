#include <Engine.h>


class ExampleLayer : public Engine::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		ENGINE_INFO("ExampleLayer::Update");
	}

	void OnEvent(Engine::Event& event) override
	{
		ENGINE_TRACE("{0}", event);
	}
};


class Game : public Engine::Application
{
public: 
	Game() {
		PushLayer(new ExampleLayer());
	}

	~Game() {

	}
};

Engine::Application* Engine::CreateApplication()
{
	return new Game();
}
