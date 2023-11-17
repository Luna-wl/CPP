#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat a("Fah", 2);
		Bureaucrat b("Tatar", 5);
		Bureaucrat c("Tar", 149);

		std::cout << "A is " << a << std::endl;
		b.incrementGrade();
		std::cout << "B is " << b << std::endl;
		c.decrementGrade();
		std::cout << "C is " << c << std::endl;
	}
	catch ( const std::exception &e ) {
		std::cout << "Exception occurred: " << e.what() << std::endl;
	}
}
