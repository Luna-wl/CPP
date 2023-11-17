#include "iter.hpp"

Array::Array() {}

Array::~Array() {}

Array::Array( const Array &cp ) {
	*this = cp;
}

Array &Array::operator=( const Array &cp ) {
	if (this != &cp) {
		*this = cp;
	}
	return *this;
}

std::ostream &operator<<( std::ostream& os, const Array &num ) {
	os << num;
	return os;
}
