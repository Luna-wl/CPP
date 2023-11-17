#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( const std::string &target ) : Aform("President", 25, 5), _target(target) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &cp ) {
	*this = cp;
}

PresidentialPardonForm &PresidentialPardonForm::operator=( const PresidentialPardonForm &cp ) {
	if (this != &cp) {
		_target = cp._target;
	}
	return *this;
}

void PresidentialPardonForm::execute( Bureaucrat const & executor ) const {
	if ( !this->isSign() ) {
		throw FromIsNotException();
	}
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
