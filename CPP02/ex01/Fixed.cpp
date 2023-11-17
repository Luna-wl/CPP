#include "Fixed.hpp"

Fixed::Fixed() : _fixvalue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int value ) : _fixvalue(value << this->_bit) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float value ) : _fixvalue(roundf(value * (1 << this->_bit))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &copy ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
	return (this->_fixvalue);
}

void Fixed::setRawBits( int const raw ) {
	this->_fixvalue = raw;
}

Fixed &Fixed::operator=( const Fixed &value ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &value)
		this->_fixvalue = value.getRawBits();
	return *this;
}

float Fixed::toFloat( void ) const {
	float floatValue = (float)this->_fixvalue / (1 << this->_bit);
	return floatValue;
}

int Fixed::toInt( void ) const {
	return this->_fixvalue >> this->_bit;
}

std::ostream &operator<<( std::ostream& os, const Fixed &value ) {
	os << value.toFloat();
	return os;
}
