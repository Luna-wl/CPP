#include "convert.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter( const ScalarConverter &cp ) {
	*this = cp;
}

ScalarConverter &ScalarConverter::operator=( const ScalarConverter &cp ) {
	if (this != &cp) {}
	return *this;
}

void ScalarConverter::convert( char *input ) {
	char *db;
	double num = std::strtod(input, &db);

	pimChar(num);
	pimInt(num);
	pimFloat(num);
	pimDouble(num);
}

void ScalarConverter::pimChar( double num ) {
	char	c;
	if (isnan(num) || isinf(num) || static_cast<char>(num) == 0)
	{
		std::cout << "char: " << "impossible" << std::endl;
		return ;
	}
	if (isprint(num) == true)
	{
		c = static_cast<char>(num);
		std::cout << "char: " << "'" << c << "'" << std::endl;
	}
	else
		std::cout << "char: " << "What is it?" << std::endl;
}

void ScalarConverter::pimInt( double num ) {
	if (isnan(num) || isinf(num) || static_cast<int>(num) == 0)
	{
		std::cout << "int: " << "impossible" << std::endl;
		return ;
	}
	if (static_cast<int>(num))
		std::cout << "int: " << static_cast<int>(num) << std::endl;
	else
		std::cout << "int: " << "What is it?" << std::endl;
}

void ScalarConverter::pimFloat( double num ) {
	if (isnan(num) || isinf(num))
	{
		std::cout << "float: " << num << "f" << std::endl;
		return ;
	}
	if (num - static_cast<float>(num) == 0)
		std::cout << "float: " << static_cast<float>(num) << std::endl;
	else
		std::cout << "float: " << static_cast<float>(num) << std::setprecision(1) << "f" << std::endl;
}

void ScalarConverter::pimDouble( double num ) {
	if (isnan(num) || isinf(num))
		std::cout << "double: " << num << std::endl;
	else
		std::cout << "double: " << num << ".0" << std::endl;
}
