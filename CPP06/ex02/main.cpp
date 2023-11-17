#include "Dynamic.hpp"

int main() {
	Base* base = Base::generate();

	Base::identify(base);

	Base::identify(*base);

	delete base;

	return 0;
}