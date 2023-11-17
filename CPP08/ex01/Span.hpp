#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <exception>
#include <iterator>
#include <vector>
#include <algorithm>

class OutofSize : public std::exception {
	const char * what () const throw () {
		return "Cannot add more numbers, Span is full.";
	}
};

class CannotFind : public std::exception {
	const char * what () const throw () {
		return "Not enough numbers to find a span.";
	}
};

class Span {
	private:
		std::vector<int> _vec;
		unsigned int _num;
	public:
		Span();
		Span(unsigned int num);
		~Span();

		Span(const Span &s);
		Span &operator=(const Span &s);
		void addNumber(int num);
		void addNumber(const std::vector<int> &arr);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void pimVec();
};

#endif
