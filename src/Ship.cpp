#include "Ship.h"
#include "BoardPins.h"

Ship::Ship()
{
	this->engine = new RocketEngine();
	this->button = new Button(BUTTON_PIN);
}

Ship::~Ship() {
	delete(this->engine);
	delete(this->button);
}

void Ship::startup()
{
	this->engine->start();

	if (this->button->pressed())
	{
		this->engine->engageHyperdrive();
		return;
	}

	this->engine->engageBoosters();
}
