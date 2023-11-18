#include "PmergeMe.hpp"

int main(int ac, char **av) {
	if (ac < 2) {
		std::cerr << "Input should be: PmergeMe 3 5 9 7 4" << std::endl;
		return 0;
	}
	try {
		PmergeMe pm;
		for (int i = 1; i < ac; i++) {
			pm.getIn(av[i]);
		}
		pm.run();
	}
	catch ( const std::exception &e ) {
		std::cerr << e.what() << std::endl;
	}
}

// $> ./PmergeMe 3 5 9 7 4 Before: 35974
// After: 34579
// Time to process a range of 5 elements with std::[..] : 0.00031 us
// Time to process a range of 5 elements with std::[..] : 0.00014 us $> ./PmergeMe `shuf -i 1-100000 -n 3000 | tr "\n" " "`
// Before: 141 79 526 321 [...] After: 79 141 321 526 [...]
// Time to process a range of 3000 elements with std::[..] : 62.14389 us Time to process a range of 3000 elements with std::[..] : 69.27212 us $>
// ./PmergeMe "-1" "2"
// Error
// $> # For OSX USER:
// $> ./PmergeMe `jot -r 3000 1 100000 | tr '\n' ' '` [...]
// $>
