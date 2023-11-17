#include "ScavTrap.hpp"

ScavTrap::ScavTrap( const std::string name ) : ClapTrap(name, 100, 50, 20) {
    std::cout << "ScavTrap " << _name << " Start!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " End!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &cp ) {
	*this = cp;
}

ScavTrap &ScavTrap::operator=( const ScavTrap &cp) {
	if (this != &cp) {
		this->_name = cp._name;
		this->_hp = cp._hp;
		this->_ep = cp._ep;
		this->_attack = cp._attack;
	}
	return *this;
}

void ScavTrap::attack(const std::string& target) {
	if (this->_ep > 0 && this->_hp > 0) {
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage!" << std::endl;
		this->_ep--;
	}
	else {
		if (this->_ep < 1)
			std::cout << "ScavTrap ran out of Energy Point -3-" << std::endl;
		else if (this->_hp < 1)
			std::cout << "ScavTrap ran out of HP =w=" << std::endl;
		return;
	}
}
