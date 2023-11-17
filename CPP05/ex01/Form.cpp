#include "Form.hpp"

Form::Form( const std::string &name, const int &sign, const int &exe ) : _name(name), gradeSign(sign), gradeExe(exe) {
	if (sign < 1 || exe < 1)
		throw GradeTooHighException();
	else if (sign > 150 || exe > 150)
		throw GradeTooLowException();
}

Form::~Form() {
}

Form::Form( const Form &copy ) : _name(copy._name), sign(copy.sign), gradeSign(copy.gradeSign), gradeExe(copy.gradeExe) {
}

Form &Form::operator=( const Form &cp ) {
	if (this != &cp) {
		sign = cp.sign;
	}
	return *this;
}

int Form::getGradeSign() const {
	return gradeSign;
}

int Form::getGradeExe() const {
	return gradeExe;
}

void Form::beSigned( const Bureaucrat &buro ) {
	if ( buro.getGrade() <= gradeSign ) {
		this->sign = true;
	}
	else {
		this->sign = false;
		throw GradeTooLowException();
	}
}

std::string Form::getForm() const {
	return _name;
}

std::ostream &operator<<( std::ostream& os, const Form &form ) {
	os << "Form name: " << form.getForm() << std::endl;
	os << "Grade Required to Sign: " << form.getGradeSign() << std::endl;
	os << "Grade Required to Execute: " << form.getGradeExe();
	return os;
}
