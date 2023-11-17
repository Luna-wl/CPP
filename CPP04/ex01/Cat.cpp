#include "Cat.hpp"

Cat::Cat() : Animal( "Cat" ) {
	this->brain = new Brain();
	std::cout << BLU << "Cat is born..."  << reset << std::endl;
}

Cat::~Cat() {
	delete this->brain;
	std::cout << BLU << "Cat is die..."  << reset << std::endl;
}

Cat::Cat( const Cat &copy) {
	std::cout << BLU << "Cat copy constructor called"  << reset << std::endl;
	std::cout << "====CAT HAS STOLE THIS BRAIN====" << std::endl;
	this->brain = new Brain(*(copy.getBrain()));
	this->type = copy.type;
}

Cat &Cat::operator=( const Cat &cp ) {
	if (this != &cp) {
		delete this->brain;
		this->type = cp.type;
		std::cout << "====CAT HAS STOLE THIS BRAIN====" << std::endl;
		this->brain = new Brain(*cp.brain);
	}
	return *this;
}

void Cat::makeSound() const{
	std::cout << BLU << "Cat sound Meow!!" << reset << std::endl;
}

Brain* Cat::getBrain() const {
	return this->brain;
}

void Cat::pimCatBrain() const {
	brain->pimBrain();
}
