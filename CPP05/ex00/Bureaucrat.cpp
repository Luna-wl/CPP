#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( const std::string &name, const int &grade ) : _name(name), _grade(grade) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat( const Bureaucrat &copy ) {
	*this = copy;
}

Bureaucrat &Bureaucrat::operator=( const Bureaucrat &cp ) {
	if (this != &cp) {
		this->_grade = cp._grade;
	}
	return *this;
}

std::string Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;
}

std::ostream &operator<<( std::ostream& os, const Bureaucrat &buro ) {
	os << buro.getName() << ", bureaucrat grade " << buro.getGrade();
	return os;
}

void Bureaucrat::incrementGrade() {
	if ( _grade == 1 ) {
		throw GradeTooHighException();
	}
	_grade--;
}

void Bureaucrat::decrementGrade() {
	if ( _grade == 150 ) {
		throw GradeTooLowException();
	}
	_grade++;
}
