#ifndef ARRAY_H
# define ARRAY_H

# define MAX_VAL 10

# include <iostream>
# include <exception>

class OutBound : public std::exception {
	public:
		const char* what() const throw() {
			return "Index out of bounds!";
		}
};

template <typename T>
class Array {
	private:
		T *_numbers;
		unsigned int _size;
	public:
		//Construction with no parameter
		Array() : _numbers(nullptr), _size(0) {}
		//Construction with an unsigned int n as a parameter
		Array( const unsigned int n ) : _numbers(new T[n]), _size(n) {
			std::cout << "create array[]: " << n <<std::endl;
		}
		//destruct
		~Array() {
			delete[] _numbers;
		}
		//copy con
		Array( const Array &cp ) {
			_numbers = new T[_size];
			_size = cp._size;
		}
		//copy assign
		Array &operator=( const Array &cp ) {
			if (this != &cp) {
				delete[] _numbers;
				_numbers = new T[_size];
				_size = cp._size;
				for (int i = 0; i < _size; i++) {
					_numbers[i] = cp._numbers[i];
				}
			}
			return *this;
		}
		// The subscript operator [] used to access array elements.
		T& operator[]( const unsigned int n ) {
			if ( n >= MAX_VAL || n < 0)
				throw OutBound();
			return _numbers[n];
		}
		// returns the number of elements in the array
		unsigned int size() {
			return _size;
		}
};

// std::ostream &operator<<( std::ostream& os, const Array &num ) {
// 	os << num.getArray();
// 	return os;
// }

#endif
