#include<Arduino.h>
#include "src/Ship.h"

Ship* app;

void setup()
{
	app = new Ship();
}

void loop()
{
	app->startup();
}
