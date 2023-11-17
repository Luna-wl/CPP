#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

# define BLK "\e[0;30m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define YEL "\e[0;33m"
# define BLU "\e[0;34m"
# define MAG "\e[0;35m"
# define CYN "\e[0;36m"
# define WHT "\e[0;37m"

class Zombie {
	private:
		std::string _name;
	public:
		Zombie( const std::string &name );
		~Zombie();
		void announce( void );
};

Zombie* newZombie( const std::string &name );
void randomChump( const std::string &name );

#endif
