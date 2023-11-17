#include "Intern.hpp"

Intern::Intern() {
}

Intern::~Intern() {}

Aform* Intern::makeForm( const std::string &formName, const std::string &target ) {
	std::string form[3] = {"shrubbery form", "robotomy form", "president form"};

	for (int i = 0; i < 3; i++) {
		if (formName == form[i]) {
			switch (i) {
				case 0:
					std::cout << "Intern creates " << formName << std::endl;
					return new ShrubberyCreationForm(target);
				case 1:
					std::cout << "Intern creates " << formName << std::endl;
					return new RobotomyRequestForm(target);
				case 2:
					std::cout << "Intern creates " << formName << std::endl;
					return new PresidentialPardonForm(target);
			}
		}
	}
	std::cout << "Intern can't access " << formName << " because form is not exist." << std::endl;
	return nullptr;
}
