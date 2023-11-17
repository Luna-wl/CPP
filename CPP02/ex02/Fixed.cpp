#include "Fixed.hpp"

Fixed::Fixed() : _fixvalue(0) {
}

Fixed::~Fixed() {
}

Fixed::Fixed( const int value ) : _fixvalue(value << this->_bit) {
}

Fixed::Fixed( const float value ) : _fixvalue(roundf(value * (1 << this->_bit))) {
}

Fixed::Fixed( const Fixed &copy ) {
	*this = copy;
}

int Fixed::getRawBits( void ) const {
	return (this->_fixvalue);
}

void Fixed::setRawBits( int const raw ) {
	this->_fixvalue = raw;
}

Fixed &Fixed::operator=( const Fixed &value ) {
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

// The 6 comparison operators: >, <, >=, <=, == and !=.
bool Fixed::operator>( const Fixed &fixed ) const {
	return (this->_fixvalue > fixed.getRawBits());
}

bool Fixed::operator<( const Fixed &fixed ) const {
	return (this->_fixvalue < fixed.getRawBits());
}

bool Fixed::operator>=( const Fixed &fixed ) const {
	return (this->_fixvalue >= fixed.getRawBits());
}

bool Fixed::operator<=( const Fixed &fixed ) const {
	return (this->_fixvalue <= fixed.getRawBits());
}

bool Fixed::operator==( const Fixed &fixed ) const {
	return (this->_fixvalue == fixed.getRawBits());
}

bool Fixed::operator!=( const Fixed &fixed ) const {
	return (this->_fixvalue != fixed.getRawBits());
}

// The 4 arithmetic operators: +, -, *, and /.
Fixed Fixed::operator+(const Fixed& num) const {
	return this->toFloat() + num.toFloat();
}

Fixed Fixed::operator*(const Fixed& num) const {
	return this->toFloat() * num.toFloat();
}

Fixed Fixed::operator-(const Fixed& num) const {
	return this->toFloat() - num.toFloat();
}

Fixed Fixed::operator/(const Fixed& num) const {
	return this->toFloat() / num.toFloat();
}

//max and min
Fixed &Fixed::max( Fixed &num1, Fixed &num2 ) {
	return (num1 > num2 ? num1 : num2);
}

const Fixed &Fixed::max( const Fixed &num1, const Fixed &num2 ) {
	return (num1 > num2 ? num1 : num2);
}

Fixed &Fixed::min( Fixed &num1, Fixed &num2 ) {
	return (num1 < num2 ? num1 : num2);
}

const Fixed &Fixed::min( const Fixed &num1, const Fixed &num2 ) {
	return (num1 < num2 ? num1 : num2);
}

// pre/post-increment
Fixed &Fixed::operator++() {
	++this->_fixvalue;
	return *this;
}

Fixed &Fixed::operator--() {
	--this->_fixvalue;
	return *this;
}

Fixed Fixed::operator++( int ) {
	Fixed num = *this;
	++this->_fixvalue;
	return num;
}

Fixed Fixed::operator--( int ) {
	Fixed num = *this;
	--this->_fixvalue;
	return num;
}