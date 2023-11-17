#include "whatever.hpp"

whatever::whatever() {}

whatever::~whatever() {}

whatever::whatever( const whatever &cp ) {
	*this = cp;
}

whatever &whatever::operator=( const whatever &cp ) {
	if (this != &cp) {
		*this = cp;
	}
	return *this;
}

std::ostream &operator<<( std::ostream& os, const whatever &num ) {
	os << num;
	return os;
}
