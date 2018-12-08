#include <Ignis.h>

class Sandbox : public Ignis::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{
		
	}
	
};

Ignis::Application* Ignis::CreateApplication()
{
	return new Sandbox();
}