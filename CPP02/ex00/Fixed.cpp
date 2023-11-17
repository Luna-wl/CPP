#include "Fixed.hpp"

Fixed::Fixed() : _fixvalue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed &copy ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixvalue);
}

void Fixed::setRawBits( int const raw ) {
	this->_fixvalue = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

Fixed &Fixed::operator=( const Fixed &value ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &value)
		this->_fixvalue = value.getRawBits();
	return *this;
}