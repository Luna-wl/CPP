#include "Dog.hpp"

Dog::Dog() : Animal( "Dog" ) {
	std::cout << GRN << "Dog is born..." << reset << std::endl;
}

Dog::~Dog() {
	std::cout << GRN << "Dog is dead..." << reset << std::endl;
}

Dog::Dog( const Dog &copy) {
	std::cout << GRN <<  "Dog copy constructor called" << reset << std::endl;
	*this = copy;
}

Dog &Dog::operator=( const Dog &cp ) {
	this->type = cp.type;
	return *this;
}

void Dog::makeSound() const{
	std::cout << GRN <<  "Dog sound Bark!!" << reset << std::endl;
}
