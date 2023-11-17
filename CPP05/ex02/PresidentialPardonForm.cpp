#include "PresidentialPardonForm.hpp"

PresidentPardonForm::PresidentPardonForm( const std::string &target ) : Aform("President", 25, 5), _target(target) {

}

PresidentPardonForm::~PresidentPardonForm() {
}

PresidentPardonForm::PresidentPardonForm( const PresidentPardonForm &cp ) {
	*this = cp;
}

PresidentPardonForm &PresidentPardonForm::operator=( const PresidentPardonForm &cp ) {
	if (this != &cp) {
		_target = cp._target;
	}
	return *this;
}

void PresidentPardonForm::execute( Bureaucrat const & executor ) const {
	if ( !this->isSign() ) {
		throw FromIsNotException();
	}
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
