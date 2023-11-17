#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

# include "AForm.hpp"

class PresidentialPardonForm : public Aform {
	private:
		std::string _target;
	public:
		PresidentialPardonForm( const std::string &target );
		~PresidentialPardonForm();
		PresidentialPardonForm( const PresidentialPardonForm &cp );
		PresidentialPardonForm &operator=( const PresidentialPardonForm &cp );
		void execute( Bureaucrat const & executor ) const;
};

#endif

