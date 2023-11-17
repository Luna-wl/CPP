#include "Zombie.hpp"

Zombie::Zombie( const std::string &name ) {
	this->_name = name;
	std::cout << GRN << this->_name << RED << " --> " << MAG << "has just been born (｡⨱ω⨱)づ" << std::endl;
}

Zombie::~Zombie() {
	std::cout << GRN << this->_name << RED << " --> " << MAG << "DIED ⤜(*⏠*)⤏" << std::endl;
}

void Zombie::announce() {
	std::cout << GRN << this->_name << RED << " --> " << MAG << "BraiiiiiiinnnzzzZ..." << std::endl;
}
