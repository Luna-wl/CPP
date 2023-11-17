#include "Zombie.hpp"

Zombie* newZombie( const std::string &name ) {
	Zombie* newZom = new Zombie( name );
	return ( newZom );
}
