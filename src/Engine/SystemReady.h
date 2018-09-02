#ifndef SRC_ENGINE_SYSTEMREADY_H_
#define SRC_ENGINE_SYSTEMREADY_H_

#include "../Lights/Light.h";

namespace Engine {

	using namespace Lights;

	class SystemReady {
		private:
			Light* light;

		public:
			SystemReady(int pin);
			virtual ~SystemReady();
			void ready();
	};
}

#endif /* SRC_ENGINE_SYSTEMREADY_H_ */
