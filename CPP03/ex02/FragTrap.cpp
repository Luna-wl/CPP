#include "FragTrap.hpp"

FragTrap::FragTrap( const std::string name ) : ClapTrap(name, 100, 100, 30){
    std::cout << "FragTrap " << _name << " Start!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << _name << " End!" << std::endl;
}

void FragTrap::highFivesGuys( void ) {
    std::cout << "HighFivesGuys" << std::endl;
}

FragTrap::FragTrap( const FragTrap &cp ) {
	*this = cp;
}

FragTrap &FragTrap::operator=( const FragTrap &cp) {
	if (this != &cp) {
		this->_name = cp._name;
		this->_hp = cp._hp;
		this->_ep = cp._ep;
		this->_attack = cp._attack;
	}
	return *this;
}
