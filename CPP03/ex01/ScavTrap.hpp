#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap( const std::string name );
		~ScavTrap();
		void guardGate();
		ScavTrap( const ScavTrap &cp );
		ScavTrap &operator=( const ScavTrap &cp);
		void attack(const std::string& target);
};


#endif
