#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

# include "AForm.hpp"
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm : public Aform {
	private:
		std::string _target;
	public:
		RobotomyRequestForm( const std::string &target );
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=( const RobotomyRequestForm &cp );
		RobotomyRequestForm( const RobotomyRequestForm &cp );
		void execute( Bureaucrat const & executor ) const;
};

#endif

