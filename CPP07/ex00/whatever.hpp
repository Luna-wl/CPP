#ifndef WHATEVER_H
# define WHATEVER_H

# include <iostream>

class whatever {
	public:
		whatever();
		~whatever();
		whatever( const whatever &cp );
		whatever &operator=( const whatever &cp );
};

std::ostream &operator<<( std::ostream& os, const whatever &num );

template <typename T>
void swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename A>
A min(A &a, A &b) {
	return (a < b ? a : b);
}

template <typename B>
B max(B &a, B &b) {
	return (a > b ? a : b);
}

#endif
