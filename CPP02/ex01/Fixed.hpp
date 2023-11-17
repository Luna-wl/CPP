#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed {
	private:
		int _fixvalue;
		static const int _bit = 8;
	public:
		Fixed();
		Fixed( const int value );
		Fixed( const float value );
		Fixed( const Fixed &copy );
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed &operator=( const Fixed &value );

		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream &operator<<( std::ostream& os, const Fixed &value );

#endif