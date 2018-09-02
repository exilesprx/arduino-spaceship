#ifndef SRC_ENGINE_HYPERDRIVE_H_
#define SRC_ENGINE_HYPERDRIVE_H_

#include "../Lights/Light.h";

namespace Engine {

	using namespace Lights;

	class HyperDrive {
		private:
			Light* topLight;
			Light* bottomLight;

		public:
			HyperDrive(int top, int bottom);
			virtual ~HyperDrive();
			void engage();
			void disengage();
	};
}

#endif /* SRC_ENGINE_HYPERDRIVE_H_ */
