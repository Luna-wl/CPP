#include "BitcoinExchang.hpp"

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Error: could not open file." << std::endl;
		return (0);
	}
	try {
		BitcoinExchange bt;
		bt.runExchange(av[1]);
	}
	catch ( const std::exception &e ) {
		std::cout << "Exception occurred: " << e.what() << std::endl;
	}
}
