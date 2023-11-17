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
		float toFloat( void ) const;
		int toInt( void ) const;

		Fixed &operator=( const Fixed &value );
		Fixed &operator++();
		Fixed &operator--();
		Fixed operator--( int );
		Fixed operator++( int );

		bool operator>( const Fixed &fixed ) const;
		bool operator<( const Fixed &fixed ) const;
		bool operator>=( const Fixed &fixed ) const;
		bool operator<=( const Fixed &fixed ) const;
		bool operator==( const Fixed &fixed ) const;
		bool operator!=( const Fixed &fixed ) const;

		Fixed operator+(const Fixed& num) const;
		Fixed operator*(const Fixed& num) const;
		Fixed operator-(const Fixed& num) const;
		Fixed operator/(const Fixed& num) const;

		static Fixed &max( Fixed &num1, Fixed &num2 );
		const static Fixed &max( const Fixed &num1, const Fixed &num2 );
		static Fixed &min( Fixed &num1, Fixed &num2 );
		const static Fixed &min( const Fixed &num1, const Fixed &num2 );

};

std::ostream &operator<<( std::ostream& os, const Fixed &value );

#endif