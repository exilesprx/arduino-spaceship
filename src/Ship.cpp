#include "Ship.h"

Ship::Ship()
{
	this->hyperdrive = new HyperDrive(4, 5);
	this->system = new SystemReady(3);
	this->button = new Button(2);
}

Ship::~Ship() {
	delete(this->system);
	delete(this->hyperdrive);
	delete(this->button);
}

void Ship::startup()
{
	this->system->ready();

	if (!this->button->pressed())
	{
		this->hyperdrive->disengage();
		return;
	}

	this->hyperdrive->engage();
}
