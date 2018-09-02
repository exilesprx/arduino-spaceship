#ifndef SRC_SHIP_H_
#define SRC_SHIP_H_

#include "Engine/HyperDrive.h"
#include "Engine/SystemReady.h"
#include "Switch/Button.h";

using namespace Switch;
using namespace Engine;

class Ship {

	private:
		Button* button;
		SystemReady* system;
		HyperDrive *hyperdrive;

	public:
		Ship();
		virtual ~Ship();
		void startup();
	};

#endif /* SRC_SHIP_H_ */
