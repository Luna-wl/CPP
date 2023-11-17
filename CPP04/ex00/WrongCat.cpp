#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal( "WrongCat" ){
	std::cout << BLU << "WrongCat is born..."  << reset << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << BLU << "WrongCat is die..."  << reset << std::endl;
}

WrongCat::WrongCat( const WrongCat &copy) {
	std::cout << BLU << "WrongCat copy constructor called"  << reset << std::endl;
	this->type = copy.getType();
}

WrongCat &WrongCat::operator=( const WrongCat &cp ) {
	this->type = cp.type;
	return *this;
}

void WrongCat::makeSound() const{
	std::cout << BLU << "WrongCat Meow!!" << reset << std::endl;
}
