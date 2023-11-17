#ifndef CONVERT_H
# define CONVERT_H

# include <iostream>
# include <cstdlib>
# include <iomanip>
# include <cmath>
# include <cctype>

class ScalarConverter {
	public:
		ScalarConverter();
		~ScalarConverter();

		ScalarConverter( const ScalarConverter &cp );
		ScalarConverter &operator=( const ScalarConverter &cp );

		static void convert( char *input );

		// static double convertString( char *input );

		static void pimChar( double num );
		static void pimInt( double num );
		static void pimFloat( double num );
		static void pimDouble( double num );
};

#endif
