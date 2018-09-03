#include "RocketEngine.h"
#include "../BoardPins.h"

namespace Engine
{
	RocketEngine::RocketEngine()
	{
		this->hyperdrive = new HyperDrive(HYPER_DRIVE_TOP_PIN, HYPER_DRIVE_BOTTOM_PIN);
		this->system = new SystemReady(SYSTEM_READY_PIN);
	}

	RocketEngine::~RocketEngine()
	{
		delete(this->hyperdrive);
	}

	void RocketEngine::start()
	{
		this->system->ready();
	}

	void RocketEngine::engageHyperdrive()
	{
		this->hyperdrive->engage();
	}

	void RocketEngine::engageBoosters()
	{
		this->hyperdrive->disengage();
	}
}
