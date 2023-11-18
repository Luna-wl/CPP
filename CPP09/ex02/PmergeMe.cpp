#include "PmergeMe.hpp"

unsigned long getTime( void ) {
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return (tv.tv_sec * 1000000) + tv.tv_usec;
}

PmergeMe::PmergeMe() : _vec(), _deq(), _timeDeq(0), _timeVec(0) {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& s) {
	*this = s;
}

PmergeMe &PmergeMe::operator=(const PmergeMe& s) {
	_vec = s._vec;
	_deq = s._deq;
	_timeDeq = s._timeDeq;
	_timeVec = s._timeVec;
	return *this;
}

void PmergeMe::getIn( char *in ) {
	int num = std::atoi(in);
	if (num < 0)
		throw SthWrong();
	_vec.push_back(num);
	_deq.push_back(num);
}

void PmergeMe::insertionSortDeq(std::deque<int> deq) {
	int i, key, j;
	int len = deq.size();

	for (i = 1; i < len; i++) {
		key = deq[i];
		j = i - 1;
		/* Move elements of deq[0..i-1], that are
		  greater than key, to one position ahead
		  of their current position */
		while (j >= 0 && deq[j] > key) {
			deq[j + 1] = deq[j];
			j = j - 1;
		}
		deq[j + 1] = key;
	}
}

void PmergeMe::mergeDeq(std::deque<int>& deq, int begin, int mid, int end) {
	int i, j, k;
	int n1 = mid - begin + 1;
	int n2 = end - mid;

	// Create temporary arrays
	std::deque<int> L(n1), R(n2);

	// Copy data to temp arrays L[] and R[]
	for (i = 0; i < n1; i++)
		L[i] = deq[begin + i];
	for (j = 0; j < n2; j++)
		R[j] = deq[mid + 1 + j];

	// Merge the temp arrays back into arr[l..r]
	i = 0;
	j = 0;
	k = begin;
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			deq[k] = L[i];
			i++;
		} else {
			deq[k] = R[j];
			j++;
		}
		k++;
	}
	// Copy the remaining elements of L[], if there are any
	while (i < n1) {
		deq[k] = L[i];
		i++;
		k++;
	}
	// Copy the remaining elements of R[], if there are any
	while (j < n2) {
		deq[k] = R[j];
		j++;
		k++;
	}
}

void PmergeMe::mergeInsertionSortDeq(std::deque<int>& deq, int begin, int end) {
	unsigned long start = getTime();
	if (end - begin < 10)
		insertionSortDeq(deq);
	else {
		if (begin < end) {
			int mid = begin + (end - begin) / 2;
			mergeInsertionSortDeq(deq, begin, mid);
			mergeInsertionSortDeq(deq, mid + 1, end);

			mergeDeq(deq, begin, mid, end);
		}
	}
	unsigned long Tend = getTime();
	_timeDeq += static_cast<double>(Tend - start) / 100000.0;
}

void PmergeMe::insertionSortVec(std::vector<int>& vec) {
	int i, key, j;
	int len = vec.size();

	for (i = 1; i < len; i++) {
		key = vec[i];
		j = i - 1;
		while (j >= 0 && vec[j] > key) {
			vec[j + 1] = vec[j];
			j = j - 1;
		}
		vec[j + 1] = key;
	}
}

void PmergeMe::mergeVec(std::vector<int>& vec, int begin, int mid, int end) {
	int i, j, k;
	int n1 = mid - begin + 1;
	int n2 = end - mid;

	// Create temporary arrays
	std::vector<int> L(n1), R(n2);

	// Copy data to temp arrays L[] and R[]
	for (i = 0; i < n1; i++)
		L[i] = vec[begin + i];
	for (j = 0; j < n2; j++)
		R[j] = vec[mid + 1 + j];

	// Merge the temp arrays back into arr[l..r]
	i = 0;
	j = 0;
	k = begin;
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			vec[k] = L[i];
			i++;
		} else {
			vec[k] = R[j];
			j++;
		}
		k++;
	}
	// Copy the remaining elements of L[], if there are any
	while (i < n1) {
		vec[k] = L[i];
		i++;
		k++;
	}
	// Copy the remaining elements of R[], if there are any
	while (j < n2) {
		vec[k] = R[j];
		j++;
		k++;
	}
}

void PmergeMe::mergeInsertionSortVec(std::vector<int>& vec, int begin, int end) {
	unsigned long start = getTime();
	if (end - begin < 10)
		insertionSortVec(vec);
	else {
		if (begin < end) {
			int mid = begin + (end - begin) / 2;
			mergeInsertionSortVec(vec, begin, mid);
			mergeInsertionSortVec(vec, mid + 1, end);

			mergeVec(vec, begin, mid, end);
		}
	}
	unsigned long Tend = getTime();
	_timeVec += static_cast<double>(Tend - start) / 100000.0;
}

void PmergeMe::run() {
	std::cout << "Before:\t";
	printContainer(_vec);
	std::cout << std::endl;
	mergeInsertionSortVec(_vec, 0, _vec.size() - 1);
	mergeInsertionSortDeq(_deq, 0, _deq.size() - 1);
	std::cout << "After:\t";
	printContainer(_vec);
	std::cout << std::endl;
	std::cout << "Time to process a range of " << _vec.size() << " elements with std::vector : " << std::fixed << std::setprecision(5) << _timeVec << " ms" << std::endl;
	std::cout << "Time to process a range of " << _deq.size() << " elements with std::deque : " << _timeDeq << " ms" << std::endl;
}
