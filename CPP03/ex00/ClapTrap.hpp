#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

# define BLK "\e[0;30m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define YEL "\e[0;33m"
# define BLU "\e[0;34m"
# define MAG "\e[0;35m"
# define CYN "\e[0;36m"
# define WHT "\e[0;37m"

class ClapTrap {
	private:
		std::string _name;
		int _hp;
		int _ep;
		int _attack;
	public:
		ClapTrap();
		ClapTrap( const std::string name );
		~ClapTrap();
		ClapTrap( const ClapTrap &cp );
		ClapTrap &operator=( const ClapTrap &cp);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
