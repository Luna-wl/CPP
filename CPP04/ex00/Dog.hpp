#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog: public Animal {
	public:
		Dog();
		~Dog();
		void makeSound() const;
		Dog &operator=( const Dog &cp );
		Dog( const Dog &copy );
};

#endif
