#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main() {
	{
		const Animal* i = new Cat();
		const Animal* j = new Dog();

		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;

		i->makeSound(); //will output the cat sound!
		j->makeSound();

		delete i;
		delete j;
	}

	// {
	// 	const Animal* ani = new Animal();
	// }

	return 0;
}
