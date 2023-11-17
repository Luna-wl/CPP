#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << RED << "WrongAnimal start"  << reset << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << YEL << "WrongAnimal die"  << reset << std::endl;
}

WrongAnimal::WrongAnimal( std::string ani ) {
	this->type = ani;
	std::cout << MAG << "New WrongAnimal type: " << type << reset << std::endl;
}

std::string WrongAnimal::getType() const {
	return type;
}

WrongAnimal::WrongAnimal( const WrongAnimal &copy ) {
	std::cout << YEL << "WrongAnimal copy constructor called"  << reset << std::endl;
	*this = copy.getType();
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &cp ) {
	this->type = cp.type;
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << YEL << "WrongAnimal sound..."  << reset << std::endl;
}
