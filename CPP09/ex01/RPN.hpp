#pragma once

# include <iostream>
# include <string>
# include <stack>
# include <cmath>
# include <cstdlib>
# include <sstream>

class RPN {
	private:
		std::stack<int> _stack;
		std::string _in;
	public:
		RPN();
		RPN(char *s);
		~RPN();
		RPN(const RPN& s);
		RPN &operator=(const RPN& s);
		void ving();

	class OperatorWrong : public std::exception {
		const char * what () const throw () {
			return "Error";
		}
	};
};
