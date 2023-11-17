#ifndef BUREAUCRA_H
# define BUREAUCRA_H

# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat( const std::string &name, const int &grade );
		Bureaucrat( const Bureaucrat &copy);
		Bureaucrat &operator=( const Bureaucrat &cp );
		~Bureaucrat();
		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm( Form &form );

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

std::ostream &operator<<( std::ostream& os, const Bureaucrat &buro );

#endif
