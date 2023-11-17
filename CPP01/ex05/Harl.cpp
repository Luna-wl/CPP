#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void Harl::debug( void ) {
	std::cout << "Debug..." << std::endl;
}

void Harl::info( void ) {
	std::cout << "Info..." << std::endl;
}

void Harl::warning( void ) {
	std::cout << "Warining..." << std::endl;
}

void Harl::error( void ) {
	std::cout << "Error..." <<std::endl;
}

void Harl::notFound( void ) {
	std::cout << "Can't find what you search" <<std::endl;
}

void Harl::complain( const std::string level ) {
	void (Harl::*Level[5])(void)= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::notFound};

	std::string array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	while (i < 5)
	{
		if (array[i].compare(level) == 0)
			break;
		i++;
	}
	switch (i)
	{
	case 0:
		(this->*Level[0])();
		break;
	case 1:
		(this->*Level[1])();
		break;
	case 2:
		(this->*Level[2])();
		break;
	case 3:
		(this->*Level[3])();
		break;
	default:
		(this->*Level[4])();
		break;
	}
}
