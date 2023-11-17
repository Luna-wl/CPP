#ifndef AFORM_H
# define AFORM_H

# include <iostream>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Aform {
	private:
		const std::string _name;
		bool sign;
		const int gradeSign;
		const int gradeExe;
	public:
		Aform();
		Aform( const std::string &name, const int &sign, const int &exe );
		~Aform();
		Aform( const Aform &copy);
		Aform &operator=( const Aform &cp );
		void beSigned( const Bureaucrat &buro );
		std::string getAform() const;
		int getGradeSign() const;
		int getGradeExe() const;
		bool isSign() const;

		virtual void execute(Bureaucrat const & executor) const = 0;

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

	class FromIsNotException : public std::exception {
		public:
			const char* what() const throw() {
				return "Access Deny!";
			}
	};
};

#endif
