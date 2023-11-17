#include "HumanA.hpp"

HumanA::HumanA( const std::string _name, Weapon &weapon ) : name(_name), _weapon(weapon) {
	std::cout << this->name << " enters in the field with " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA() {
	std::cout << this->name << " is dead! *w*" << std::endl;
}

void HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->_weapon.getType() << std::endl;
}
