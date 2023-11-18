#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(char *s) {
	_in = s;
}

RPN::~RPN() {}

RPN::RPN(const RPN& s) {
	*this = s;
}

RPN &RPN::operator=(const RPN& s) {
	_in = s._in;
	_stack = s._stack;
	return *this;
}

void RPN::ving() {
	for (int i = 0; i < _in.length(); i++) {
		if (_in[i] == ' ')
			continue;
		else {
			if (isdigit(_in[i])) {
				int num = std::atoi(&_in[i]);
				if (num >= 0 && num <= 9)
					_stack.push(num);
				else
					throw OperatorWrong();
			}
			else if (_in[i] == '+' || _in[i] == '-' || _in[i] == '*' || _in[i] == '/' ) {
				int r = _stack.top();
				_stack.pop();
				int l = _stack.top();
				_stack.pop();
				int result;
				switch(_in[i]) {
					case '+':
						result = l + r;
						break;
					case '-':
						result = l - r;
						break;
					case '*':
						result = l * r;
						break;
					case '/':
						if (r == 0)
							throw OperatorWrong();
						result = l / r;
						break;
				}
				_stack.push(result);
			}
			else
				throw OperatorWrong();
		}
	}
	if (_stack.size() != 1)
		throw OperatorWrong();
	std::cout << _stack.top() << std::endl;
}
