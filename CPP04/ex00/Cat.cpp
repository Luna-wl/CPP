#include "Cat.hpp"

Cat::Cat() : Animal( "Cat" ){
	std::cout << BLU << "Cat is born..."  << reset << std::endl;
}

Cat::~Cat() {
	std::cout << BLU << "Cat is die..."  << reset << std::endl;
}

Cat::Cat( const Cat &copy) {
	std::cout << BLU << "Cat copy constructor called"  << reset << std::endl;
	*this = copy;
}

Cat &Cat::operator=( const Cat &cp ) {
	this->type = cp.type;
	return *this;
}

void Cat::makeSound() const{
	std::cout << BLU << "Cat sound Meow!!" << reset << std::endl;
}
