#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
	public:
		FragTrap( const std::string name );
		~FragTrap();
		void highFivesGuys( void );
		FragTrap( const FragTrap &cp );
		FragTrap &operator=( const FragTrap &cp);
};


#endif
