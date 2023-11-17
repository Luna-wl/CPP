#ifndef INTERN_H
#define INTERN_H

# include "AForm.hpp"
# include <exception>
# include <iostream>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class ShrubberyCreationForm;
class RobotomyRequestForm;
class PresidentialPardonForm;

class Intern {
	public:
		Intern();
		~Intern();
		Aform* makeForm( const std::string &formName, const std::string &target );
};

class InternAcceptException : public std::exception {
	public:
		const char* what() const throw() {
			return "This form is not exist!";
		}
};


#endif

