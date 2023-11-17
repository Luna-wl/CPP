#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

# define BLK "\e[0;30m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define YEL "\e[0;33m"
# define BLU "\e[0;34m"
# define MAG "\e[0;35m"
# define CYN "\e[0;36m"
# define WHT "\e[0;37m"
# define reset "\e[0m"

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal( std::string ani );
		Animal( const Animal &copy );
		Animal &operator=( const Animal &cp );
		std::string getType() const;

		virtual ~Animal();
		virtual void makeSound() const;
};

#endif
