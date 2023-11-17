# include <iostream>
# include <string>

# define BLU "\e[0;34m"
# define MAG "\e[0;35m"

int main() {
	std::string brain = "HI THIS IS BRAIN";
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << BLU << "The memory address of the string variable = " << &brain << std::endl;
	std::cout << BLU << "The memory address held by stringPTR      = " << &stringPTR << std::endl;
	std::cout << BLU << "The memory address held by stringREF      = " << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << MAG << "The value of the string variable  = " << brain << std::endl;
	std::cout << MAG << "The value pointed to by stringPTR = " << stringPTR << std::endl;
	std::cout << MAG << "The value pointed to by stringREF = " << stringREF << std::endl;
}
