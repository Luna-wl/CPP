#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal, public Brain {
	private:
		Brain *brain;
	public:
		Cat();
		~Cat();
		Cat( const Cat &copy);
		Cat &operator=( const Cat &cp );

		void makeSound() const;
		Brain* getBrain() const;
		void pimCatBrain() const;
};

#endif
