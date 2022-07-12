#include <Nika.h>

class Sandbox : public Nika::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Nika::Application* Nika::CreateApplication()
{
	return new Sandbox();
}