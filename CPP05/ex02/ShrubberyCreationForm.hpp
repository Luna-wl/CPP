#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

# include <fstream>
# include <sstream>
# include <string>
# include "AForm.hpp"

class ShrubberyCreationForm : public Aform {
	private:
		std::string _target;
	public:
		ShrubberyCreationForm( const std::string &target );
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=( const ShrubberyCreationForm &cp );
		ShrubberyCreationForm( const ShrubberyCreationForm &cp );
		void createTree() const;
		void execute( Bureaucrat const & executor ) const;
};

#endif
