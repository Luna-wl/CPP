#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat: public Animal {
	public:
		Cat();
		~Cat();
		void makeSound() const;
		Cat( const Cat &copy );
		Cat &operator=( const Cat &cp );
};

#endif
