#include "HumanB.hpp"

HumanB::HumanB( const std::string _name ) : name(_name) {
	std::cout << this->name << " enters in the field without any weapon " << std::endl;
}

HumanB::~HumanB() {
	std::cout << this->name << " is dead! *w*" << std::endl;
}

void HumanB::setWeapon( Weapon &newWeapon ) {
	this->_weapon = &newWeapon;
	std::cout << this->name << " take " << this->_weapon->getType() << " weapon" << std::endl;
}

void HumanB::attack() {
	std::cout << this->name << " attacks with their " << this->_weapon->getType() << std::endl;
}
