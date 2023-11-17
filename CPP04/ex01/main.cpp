#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main() {
	// {
	// 	const Animal* j = new Dog();
	// 	const Animal* i = new Cat();

	// 	delete j;//should not create a leak
	// 	delete i;
	// }
	// std::cout << std::endl;
	// {
	// 	const Animal	*(animal_array[4]);
	// 	std::cout << std::endl;
	// 	// Half filled with dogs
	// 	for (int i = 0; i < 4; i++) {
	// 		if (i % 2 == 0)
	// 			animal_array[i] = new Dog();
	// 		else
	// 			animal_array[i] = new Cat();
	// 	}
	// 	std::cout << std::endl;

	// 	for (int i = 0; i < 4; i++)
	// 		delete animal_array[i];
	// 	std::cout << std::endl;
	// }

	std::cout << "Deeeeeeeeeeeeeeeep" << std::endl;
	{
		Dog	doggo;
		{
			std::cout << "copy con" << std::endl;
			Dog	boi(doggo);
			std::cout << "Doggo: " <<std::endl;
			doggo.pimDogBrain();
			std::cout << "Boi: " <<std::endl;
			boi.pimDogBrain();
			// std::cout << "boi:" << &boi <<std::endl;
			// std::cout << "doggo:" << &doggo <<std::endl;

		}
		std::cout << std::endl;
		{
			std::cout << "default then assign con" << std::endl;
			Dog	boi;
			boi = doggo;
			std::cout << "Doggo: " <<std::endl;
			doggo.pimDogBrain();
			std::cout << "Boi: " <<std::endl;
			boi.pimDogBrain();
			// std::cout << "boi:" << &boi <<std::endl;
			// std::cout << "doggo:" << &doggo <<std::endl;
		}
	}

	return 0;
}
