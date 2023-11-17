#include "Harl.hpp"

int main(int ac, char **av) {
	if (ac != 2)
	{
		std::cout << "Please insert the level" << std::endl;
		return 0;
	}
	std::string str = av[1];
	for(int i = 0; i < str.length(); i++) {
		if (islower(str[i]))
		{
			std::cout << "We only accept UpperCase!" << std::endl;
			return 0;
		}
	}
	Harl harl;

	harl.complain(str);
	return (0);
}
