#include "HyperDrive.h"
#include <Arduino.h>

namespace Engine {

	HyperDrive::HyperDrive(int top, int bottom)
	{
		this->topLight = new Light(top);

		this->bottomLight = new Light(bottom);
	}

	HyperDrive::~HyperDrive() {
		delete(this->topLight);
		delete(this->bottomLight);
	}

	void HyperDrive::engage()
	{
		this->topLight->turnOn();
		this->bottomLight->turnOff();
		delay(200);
		this->topLight->turnOff();
		this->bottomLight->turnOn();
		delay(200);

	}

	void HyperDrive::disengage()
	{
		this->topLight->turnOff();

		this->bottomLight->turnOff();
	}
}
