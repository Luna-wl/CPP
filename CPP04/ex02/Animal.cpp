#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << YEL << "Animal start"  << reset << std::endl;
}

Animal::~Animal() {
	std::cout << YEL << "Animal die"  << reset << std::endl;
}

Animal::Animal( std::string ani ) {
	this->type = ani;
	std::cout << MAG << "New Animal type: " << type << reset << std::endl;
}

std::string Animal::getType() const {
	return type;
}

Animal::Animal( const Animal &copy ) {
	std::cout << YEL << "Animal copy constructor called"  << reset << std::endl;
	*this = copy;
}

Animal &Animal::operator=( const Animal &cp ) {
	this->type = cp.type;
	return *this;
}
