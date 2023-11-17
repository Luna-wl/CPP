#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

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

class WrongAnimal {
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal( std::string ani );
		WrongAnimal( const WrongAnimal &copy );
		WrongAnimal &operator=( const WrongAnimal &cp );
		std::string getType() const;

		virtual ~WrongAnimal();
		virtual void makeSound() const;
};

#endif
