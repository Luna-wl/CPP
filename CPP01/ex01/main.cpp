#include "Zombie.hpp"

int main() {
	int num = 3;
	Zombie* zombie = zombieHorde( num, "Tatar" );

	for (int i = 0; i < num; i++) {
		std::cout << YEL << i << ": ";
		zombie[i].announce();
	}
	
	delete[] zombie;
}