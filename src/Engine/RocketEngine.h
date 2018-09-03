#ifndef SRC_ENGINE_ROCKETENGINE_H_
#define SRC_ENGINE_ROCKETENGINE_H_

#include "HyperDrive.h"
#include "SystemReady.h"

namespace Engine
{
	class RocketEngine
	{
		private:
			HyperDrive* hyperdrive;
			SystemReady* system;

		public:
			RocketEngine();
			virtual ~RocketEngine();
			void start();
			void engageHyperdrive();
			void engageBoosters();
	};
}

#endif /* SRC_ENGINE_ROCKETENGINE_H_ */
