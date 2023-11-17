#include "iter.hpp"

int main()
{
	{
		int array[] = {1, 3, 5, 2};
		int lenght = sizeof(array) / sizeof(array[0]);

		iter(array, lenght, pim<int>);
		std::cout << "================" << std::endl;
		iter(array, lenght, plusOne<int>);
	}
	std::cout << std::endl;
	{
		double d[] = {1.2 , 2.5 , 2.6, 6.3};
		double lenght = sizeof(d) / sizeof(d[0]);

		iter(d, lenght, pim<double>);
		std::cout << "================" << std::endl;
		iter(d, lenght, plusOne<double>);
	}
	std::cout << std::endl;
	{
		char d[] = {'a', 'b', 'c', 'd'};
		char lenght = sizeof(d) / sizeof(d[0]);

		iter(d, lenght, pim<char>);
		std::cout << "================" << std::endl;
		iter(d, lenght, plusOne<char>);
	}
}
