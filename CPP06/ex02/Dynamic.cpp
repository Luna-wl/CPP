#include "Dynamic.hpp"

Base::Base() {
}

Base::~Base() {
}

Base::Base( const Base &cp ) {
	*this = cp;
}

Base &Base::operator=( const Base &cp ) {
	if (this != &cp) {
	}
	return *this;
}

Base* Base::generate(void) {
	srand(time(0));
	int random = rand() % 3;

	switch (random) {
		case 0:
			return new A();
		case 1:
			return new B();
		default:
			return new C();
	}
}

void Base::identify(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	}
	else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	}
	else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	}
	else {
		std::cout << "Unknown type" << std::endl;
	}
}

void Base::identify(Base& p) {
	identify(&p);
}
