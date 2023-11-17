#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main() {
	{
		const Animal* meta = new Animal();
		const Animal* i = new Cat();
		const Animal* j = new Dog();

		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;

		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		std::cout << std::endl;
		delete i;
		delete j;
		delete meta;
	}
	std::cout << "-------------------------" << std::endl << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();

		std::cout << i->getType() << " " << std::endl;

		i->makeSound(); //will output the cat sound!
		meta->makeSound();
		std::cout << std::endl;
		delete i;
		delete meta;
	}
}
