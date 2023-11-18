#include "RPN.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Error" << std::endl;
		return 0;
	}
	try {
		RPN(av[1]).ving();
	}
	catch ( const std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
}
