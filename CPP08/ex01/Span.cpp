#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int num) : _num(num) {}

Span::~Span() {}

Span::Span(const Span &s) {
	*this = s;
}

Span &Span::operator=(const Span &s) {
	if (this != &s)
		_num = s._num;
	return *this;
}

void Span::addNumber(const std::vector<int> &arr) {
	if (_vec.size() < _num) {
		for (int i = 0; _vec.size(); i++) {
			_vec.push_back(arr[i]);
		}
	}
	else
		throw OutofSize();
}

void Span::addNumber(int num) {
	if (_vec.size() < _num) {
		_vec.push_back(num);
	}
	else
		throw OutofSize();
}

unsigned int Span::shortestSpan() {
	if (_vec.size() < 2)
		throw CannotFind();
	std::sort(_vec.begin(), _vec.end(), std::greater<int>());
	int tmp = _vec[0] - _vec[1];
	for (int i = 0; i < _num; i++) {
		for (int j = i + 1; j < _num; j++) {
			if (_vec[i] - _vec[j] < tmp && _vec[i] != _vec[j])
				tmp = _vec[i] - _vec[j];
		}
	}
	return tmp;
}

unsigned int Span::longestSpan() {
	if (_vec.size() < 2)
		throw CannotFind();
	std::sort(_vec.begin(), _vec.end(), std::greater<int>());
	int tmp = _vec[0] - _vec[1];
	for (int i = 0; i < _num; i++) {
		for (int j = i + 1; j < _num; j++) {
			if (_vec[i] - _vec[j] > tmp && _vec[i] != _vec[j])
				tmp = _vec[i] - _vec[j];
		}
	}
	return tmp;
}

void Span::pimVec() {
	for (int i = 0; i < _vec.size(); i++) {
		std::cout << "vec[" << i << "]: " << _vec[i] << std::endl;
	}
}
