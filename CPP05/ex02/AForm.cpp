#include "AForm.hpp"

Aform::Aform()  : _name("Default Form"), gradeSign(150), gradeExe(150) {
}

Aform::Aform( const std::string &name, const int &sign, const int &exe ) : _name(name), gradeSign(sign), gradeExe(exe) {
	if (sign < 1 || exe < 1)
		throw GradeTooHighException();
	else if (sign > 150 || exe > 150)
		throw GradeTooLowException();
}

Aform::~Aform() {
}

Aform::Aform( const Aform &copy ) : _name(copy._name), sign(copy.sign), gradeSign(copy.gradeSign), gradeExe(copy.gradeExe) {
}

Aform &Aform::operator=( const Aform &cp ) {
	if (this != &cp) {
		sign = cp.sign;
	}
	return *this;
}

int Aform::getGradeSign() const {
	return gradeSign;
}

int Aform::getGradeExe() const {
	return gradeExe;
}

bool Aform::isSign() const {
	return sign;
}

void Aform::beSigned( const Bureaucrat &buro ) {
	if ( buro.getGrade() <= gradeSign ) {
		this->sign = true;
	}
	else {
		this->sign = false;
		throw GradeTooLowException();
	}
}

std::string Aform::getAform() const {
	return _name;
}

std::ostream &operator<<( std::ostream& os, const Aform &Aform ) {
	os << "Aform name: " << Aform.getAform() << std::endl;
	os << "Grade Required to Sign: " << Aform.getGradeSign() << std::endl;
	os << "Grade Required to Execute: " << Aform.getGradeExe();
	return os;
}
