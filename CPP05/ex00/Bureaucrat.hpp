#ifndef BUREAUCRA_H
# define BUREAUCRA_H

# include <iostream>
# include <exception>

class Bureaucrat {
	private:
		const std::string _name;
		int _grade;
	public:
		Bureaucrat( const std::string &name, const int &grade );
		~Bureaucrat();
		Bureaucrat( const Bureaucrat &copy);
		Bureaucrat &operator=( const Bureaucrat &cp );
		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();

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
