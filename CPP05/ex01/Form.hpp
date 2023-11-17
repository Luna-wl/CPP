#ifndef FORM_H
# define FORM_H

# include <iostream>
# include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string _name;
		bool sign;
		const int gradeSign;
		const int gradeExe;
	public:
		Form( const std::string &name, const int &sign, const int &exe );
		~Form();
		Form( const Form &copy);
		Form &operator=( const Form &cp );
		void beSigned( const Bureaucrat &buro );
		std::string getForm() const;
		int getGradeSign() const;
		int getGradeExe() const;

	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw() {
			return "Grade is too high!";
		}
	};

	class GradeTooLowException : public std::exception {
	public:
	const char* what() const throw() {
		return "Grade is too low!";
	}
	};
};

std::ostream &operator<<( std::ostream& os, const Form &form );

#endif
