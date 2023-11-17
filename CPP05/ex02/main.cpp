 #include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	{
		Bureaucrat a( "Tatar", 145 );
		ShrubberyCreationForm f1( "Forest" );

		try {
			std::cout << "=== SIGN FORM ===" << std::endl;
			a.signForm( f1 );
			std::cout << "=== EXECUTE FORM ===" << std::endl;
			a.executeForm( f1 );
		}
		catch ( std::exception &e ) {
			std::cout << e.what() << std::endl;
		}
	}

	// {
	// 	Bureaucrat b( "Tar", 45 );
	// 	RobotomyRequestForm f2( "Factory" );

	// 	try {
	// 		std::cout << "=== SIGN FORM ===" << std::endl;
	// 		b.signForm( f2 );
	// 		std::cout << "=== EXECUTE FORM ===" << std::endl;
	// 		b.executeForm( f2 );
	// 	}
	// 	catch ( std::exception &e ) {
	// 		std::cout << e.what() << std::endl;
	// 	}
	// }

	// {
	// 	Bureaucrat c( "FAH", 25 );
	// 	PresidentPardonForm f3( "White Home" );

	// 	try {
	// 		std::cout << "=== SIGN FORM ===" << std::endl;
	// 		c.signForm( f3 );
	// 		std::cout << "=== EXECUTE FORM ===" << std::endl;
	// 		c.executeForm( f3 );
	// 	}
	// 	catch ( std::exception &e ) {
	// 		std::cout << e.what() << std::endl;
	// 	}
	// }
}
