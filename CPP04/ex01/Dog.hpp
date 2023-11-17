#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal, public Brain {
	private:
		Brain *brain;
	public:
		Dog();
		~Dog();
		Dog( const Dog &copy);
		Dog &operator=( const Dog &cp );
		void makeSound() const;
		Brain* getBrain() const;
		void pimDogBrain() const;
};

#endif
