#ifndef ITER_H
# define ITER_H

# include <iostream>

class Array {
	public:
		Array();
		~Array();
		Array( const Array &cp );
		Array &operator=( const Array &cp );
};

std::ostream &operator<<( std::ostream& os, const Array &num );

template <typename T>
void iter(T *address, T &lenght, void (*f)(T &array)) {
	for (int i = 0; i < lenght; i++) {
		(*f)(address[i]);
	}
}

template <typename T>
void pim(T &array) {
	std::cout << "Element = " << array << std::endl;
}

template <typename T>
void plusOne(T &array) {
	array += 1;
	std::cout << "Element = " << array << std::endl;
}

#endif
