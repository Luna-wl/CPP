# include "Brain.hpp"

Brain::Brain() {
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = "I have brain....";
	}
	std::cout << CYN << "I have 100 brains!" << reset << std::endl;
}

Brain::~Brain() {
	delete[] this->ideas;
	std::cout << CYN << "I'm out of brain!" << reset << std::endl;
}

Brain::Brain( const Brain &cp ) {
	std::cout << "Brain deep copy\n";
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = cp.ideas[i] + "was stolen :p";
	}
}

Brain &Brain::operator=( const Brain &cp ) {
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = cp.ideas[i];
	}
	return *this;
}

void Brain::pimBrain() const {
	for (int i = 0; i < 100; i++) {
		std::cout << ideas[i] << std::endl;
	}
}
