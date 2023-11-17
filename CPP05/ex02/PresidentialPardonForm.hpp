#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

# include "AForm.hpp"

class PresidentPardonForm : public Aform {
	private:
		std::string _target;
	public:
		PresidentPardonForm( const std::string &target );
		~PresidentPardonForm();
		PresidentPardonForm( const PresidentPardonForm &cp );
		PresidentPardonForm &operator=( const PresidentPardonForm &cp );
		void execute( Bureaucrat const & executor ) const;
};

#endif

