#include "SystemReady.h"

namespace Engine {

	SystemReady::SystemReady(int pin)
	{
		this->light = new Light(pin);
	}

	SystemReady::~SystemReady()
	{
		delete(this->light);
	}

	void SystemReady::ready()
	{
		this->light->turnOn();
	}
}
