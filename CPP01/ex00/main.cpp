#include "Zombie.hpp"

int	main() {
	Zombie* Zombie = newZombie("Tatar");
	Zombie->announce();
	delete Zombie;
	std::cout << std::endl;

	randomChump("Tar");
}