#include "Button.h"
#include <Arduino.h>

namespace Switch {

	Button::Button(int pin)
	{
		this->pinLocation = pin;

		pinMode(this->pinLocation, INPUT);
	}

	Button::~Button() {

	}

	bool Button::pressed()
	{
		int state = digitalRead(this->pinLocation);

		return state == HIGH;
	}
}
