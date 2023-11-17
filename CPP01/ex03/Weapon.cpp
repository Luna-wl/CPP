#include "Weapon.hpp"

Weapon::Weapon( const std::string str ) : type(str) {
	std::cout << type << " weapon has been created" << std::endl;
}

Weapon::~Weapon() {

}

void Weapon::setType( const std::string str ) {
	this->type = str;
	std::cout << "Weapon has been changed to " << this->type << std::endl;
}

const std::string &Weapon::getType() {
	return (this->type);
}
