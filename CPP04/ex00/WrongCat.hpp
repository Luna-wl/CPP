#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
	public:
		WrongCat();
		~WrongCat();
		void makeSound() const;
		WrongCat( const WrongCat &copy );
		WrongCat &operator=( const WrongCat &cp );
};

#endif
