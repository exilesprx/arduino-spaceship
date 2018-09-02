#include "Light.h"
#include <Arduino.h>

namespace Lights {

	Light::Light(int pin)
	{
		this->pin = pin;

		pinMode(this->pin, OUTPUT);
	}

	Light::~Light() {
		//
	}

	void Light::turnOff()
	{
		digitalWrite(this->pin, LOW);
	}

	void Light::turnOn()
	{
		digitalWrite(this->pin, HIGH);
	}
}
