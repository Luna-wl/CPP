#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <sys/time.h>
#include <exception>
#include <algorithm>
#include <ctime>
#include <iomanip>

class PmergeMe {
	private:
		std::vector<int> _vec;
		std::deque<int> _deq;
		double _timeVec;
		double _timeDeq;
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe& s);
		PmergeMe &operator=(const PmergeMe& s);

		void getIn( char *in );
		void run();

		void insertionSortVec(std::vector<int>& vec);
		void mergeInsertionSortVec(std::vector<int>& vec, int begin, int end);
		void mergeVec(std::vector<int>& vec, int begin, int mid, int end);

		void insertionSortDeq(std::deque<int> deq);
		void mergeInsertionSortDeq(std::deque<int>& deq, int begin, int end);
		void mergeDeq(std::deque<int>& deq, int begin, int mid, int end);

	class SthWrong : public std::exception {
		const char * what () const throw () {
			return "Error";
		}
	};
};

template <typename T>
void printContainer(T &container) {
	typename T::iterator it = container.begin();
	typename T::iterator it2 = container.end();
	int	num = 0;
	while (it != it2) {
		if (num > 6) {
			std::cout <<  "[...]";
			break;
		}
		std::cout << *it << " ";
		it++;
		num++;
	}
}
