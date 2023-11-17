#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << GRN << "Zombie has just been born (｡⨱ω⨱)づ" << std::endl;
}

Zombie::~Zombie() {
	std::cout << CYN << this->_name << RED << " --> " << MAG << "DIED ⤜(*⏠*)⤏" << std::endl;
}

void Zombie::setName( const std::string &name ) {
	this->_name = name;
}

void Zombie::announce() {
	std::cout << CYN << this->_name << RED << " --> " << MAG << "BraiiiiiiinnnzzzZ..." << std::endl;
}
