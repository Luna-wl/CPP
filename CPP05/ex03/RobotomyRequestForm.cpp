#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( const std::string &target ) : Aform("Roboto", 72, 45), _target(target) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &cp ) {
	*this = cp;
}

RobotomyRequestForm &RobotomyRequestForm::operator=( const RobotomyRequestForm &cp ) {
	if (this != &cp) {
		_target = cp._target;
	}
	return *this;
}

void RobotomyRequestForm::execute( Bureaucrat const & executor ) const {
	if ( !this->isSign() ) {
		throw FromIsNotException();
	}

	srand(time(NULL));
	bool isSuccess = (rand() % 2 == 0);

	if (isSuccess) {
		std::cout << _target << " has been robotomized successfully!" << std::endl;
	}
	else {
		std::cout << _target << "has been failed to execute!" << std::endl;
	}
}
