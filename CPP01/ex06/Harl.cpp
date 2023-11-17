#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void Harl::debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl << "Debug...\n" << std::endl;
}

void Harl::info( void ) {
	std::cout << "[ INFO ]" << std::endl << "Info...\n" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "[ WARNING ]" << std::endl << "Warining...\n" << std::endl;
}

void Harl::error( void ) {
	std::cout << "[ ERROR ]" << std::endl << "Error...\n" <<std::endl;
}

void Harl::notFound( void ) {
	std::cout << "[ Probably complaining about insignificant problems ]" <<std::endl;
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
	case 1:
		(this->*Level[1])();
	case 2:
		(this->*Level[2])();
	case 3:
		(this->*Level[3])();
		break;
	default:
		(this->*Level[4])();
		break;
	}
}
