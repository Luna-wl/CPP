#ifndef BRAIN_H
# define BRAIN_H

# include "Animal.hpp"

class Brain {
	protected:
		std::string *ideas;
	public:
		Brain();
		~Brain();

		Brain( const Brain &copy );
		Brain &operator=( const Brain &cp );
		void pimBrain() const;
};

#endif
