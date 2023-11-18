#include "RPN.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Error" << std::endl;
		return 0;
	}
	try {
		RPN(av[1]).ving();
	}
	catch ( const std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
}
