#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Nobody"), _hp(10), _ep(10), _attack(0) {
	std::cout << "ClapTrap " << _name << " has created!" << std::endl;
}

ClapTrap::ClapTrap( const std::string name ) : _name(name), _hp(10), _ep(10), _attack(0) {
	std::cout << "ClapTrap " << this->_name << " Start!" << std::endl;
}

ClapTrap::ClapTrap( const std::string name, const int hp, const int ep, const int at ) : _name(name), _hp(hp), _ep(ep), _attack(at) {
	std::cout << "ClapTrap " << this->_name << " Start!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->_name << " End!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap &cp ) {
	*this = cp;
}

ClapTrap &ClapTrap::operator=( const ClapTrap &cp) {
	if (this != &cp) {
		this->_name = cp._name;
		this->_hp = cp._hp;
		this->_ep = cp._ep;
		this->_attack = cp._attack;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (this->_ep > 0 && this->_hp > 0) {
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage!" << std::endl;
		this->_ep--;
	}
	else {
		if (this->_ep < 1)
			std::cout << "ClapTrap ran out of Energy Point -3-" << std::endl;
		else if (this->_hp < 1)
			std::cout << "ClapTrap ran out of HP =w=" << std::endl;
		return;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_ep > 0 && this->_hp > 0) {
		std::cout << "ClapTrap " << this->_name << " has been taken " << amount << " attack point" << std::endl;
		this->_ep--;
		this->_hp -= amount;
	}
	else {
		if (this->_ep < 1)
			std::cout << "ClapTrap ran out of Energy Point -3-" << std::endl;
		else if (this->_hp < 1)
			std::cout << "ClapTrap ran out of HP =w=" << std::endl;
		return;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_ep > 0 && this->_hp > 0) {
		std::cout << "ClapTrap " << this->_name << " has been repaired with " << amount << " point" << std::endl;
		this->_ep--;
		this->_hp += amount;
	}
	else {
		if (this->_ep < 1)
			std::cout << "ClapTrap ran out of Energy Point -3-" << std::endl;
		else if (this->_hp < 1)
			std::cout << "ClapTrap ran out of HP =w=" << std::endl;
		return;
	}
}
