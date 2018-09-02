#ifndef SRC_LIGHTS_LIGHT_H_
#define SRC_LIGHTS_LIGHT_H_

namespace Lights {

	class Light {
		private:
			int pin;

		public:
			Light(int pin);
			virtual ~Light();
			void turnOn();
			void turnOff();
	};
}

#endif /* SRC_LIGHTS_LIGHT_H_ */
