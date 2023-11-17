#include "Bureaucrat.hpp"

int main()
{
	try {
		// Bureaucrat a("Fah", 2);
		// Form f("TAX", 1, 1);
		// Bureaucrat b("Tatar", 5);
		// Bureaucrat c("Tar", 149);
		Bureaucrat bureaucrat("Tatar", 90);
        std::cout << "Bureaucrat Name: " << bureaucrat.getName() << std::endl;
        std::cout << "Bureaucrat Grade: " << bureaucrat.getGrade() << std::endl;
        std::cout << std::endl;

        Form form("Form-1", 80, 80);
        std::cout << form << std::endl;
        std::cout << std::endl;

        bureaucrat.signForm(form);

        form.beSigned(bureaucrat);
        std::cout << form << std::endl;

        // bureaucrat.signForm(form);
		// b.incrementGrade();
		// std::cout << "B is " << b << std::endl;
		// c.decrementGrade();
		// std::cout << "C is " << c << std::endl;
	}
	catch ( const std::exception &e ) {
		std::cout << "Exception occurred: " << e.what() << std::endl;
	}
}
