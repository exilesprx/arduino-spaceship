#ifndef SRC_SWITCH_BUTTON_H_
#define SRC_SWITCH_BUTTON_H_

namespace Switch {

	class Button {
		private:
			int pinLocation;

		public:
			Button(int pin);
			virtual ~Button();
			bool pressed();
	};
}

#endif /* SRC_SWITCH_BUTTON_H_ */
