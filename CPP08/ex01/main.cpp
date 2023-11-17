#include "Span.hpp"

int main() {
	{
		try {
			Span sp = Span(5);
			sp.addNumber(3);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);

			std::cout << "ShortestSpan: " << sp.shortestSpan() << std::endl;
			std::cout << "LongestSpan: " << sp.longestSpan() << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	// {
	// 	{
	// 		Span sp = Span(10000);
	// 		srand(time(0));
	// 		for (int i = 0; i < 10000; i++) {
	// 			sp.addNumber(rand());
	// 		}
	// 		sp.pimVec();
	// 	}
	// 	{
	// 		try {
	// 			int	arr[] = {2, 3, 4, 5, 6};
	// 			std::vector<int>	vec(arr, arr + 5);
	// 			Span sp = Span(5);
	// 			sp.addNumber(vec);
	// 		} catch (std::exception & e) {
	// 			std::cout << e.what() << std::endl;
	// 		}
	// 	}
	// }
	return 0;
}
