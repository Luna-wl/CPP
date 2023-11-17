#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <iostream>
# include <vector>
# include <algorithm>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> > {
	public:
		typedef typename std::deque<T>::iterator iterator;

		MutantStack() {
			std::cout << "MutantStack created!!" << std::endl;
		}

		~MutantStack() {
			std::cout << "MutantStack destroy!!" << std::endl;
		}

		MutantStack(const MutantStack &m) {
			*this = m;
		}

		MutantStack &operator=(const MutantStack &m) {
			return *this;
		}

		iterator begin() {
			return this->c.begin();
		}

		iterator end() {
			return this->c.end();
		}
};

#endif
