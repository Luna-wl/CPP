#include "Zombie.hpp"

void randomChump( const std::string &name ) {
	Zombie* zombie = newZombie( name );
	zombie->announce();
	delete zombie;
}
