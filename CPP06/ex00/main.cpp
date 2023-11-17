#include "convert.hpp"

int main(int ac, char **av) {
	ScalarConverter a;

	if (ac != 2) {
		std::cout << "I need only 2 arguments! =.=" << std::endl;
		return 0;
	}
	a.convert(av[1]);
}

/*
./convert 0
char: Non displayable
int: 0
float: 0.0f
double: 0.0

./convert nan
char: impossible
int: impossible
float: nanf
double: nan

./convert 42.0f
char: '*'
int: 42
float: 42.0f
double: 42.0
*/
