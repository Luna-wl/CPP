#include "Dog.hpp"

Dog::Dog() : Animal( "Dog" ) {
	this->brain = new Brain();
	std::cout << YEL << "Dog is born..." << reset << std::endl;
}

Dog::~Dog() {
	delete this->brain;
	std::cout << YEL << "Dog is dead..." << reset << std::endl;
}

Dog::Dog( const Dog &copy) {
	std::cout << YEL <<  "Dog copy constructor called" << reset << std::endl;
	std::cout << "====DOG HAS STOLE THIS BRAIN====" << std::endl;
	this->brain = new Brain(*(copy.getBrain()));
	this->type = copy.type;
}

Dog &Dog::operator=( const Dog &cp ) {
	if (this != &cp) {
		delete this->brain;
		this->type = cp.type;
		std::cout << "====DOG HAS STOLE THIS BRAIN====" << std::endl;
		this->brain = new Brain(*cp.brain);
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << YEL <<  "Dog sound Bark!!" << reset << std::endl;
}

Brain* Dog::getBrain() const {
	return this->brain;
}

void Dog::pimDogBrain() const {
	brain->pimBrain();
}
