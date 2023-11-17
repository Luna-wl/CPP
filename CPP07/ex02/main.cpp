#include "Array.hpp"

int main(int, char**)
{
	// try {
	// 	Array<int>	a;
	// 	Array<int>	b(3);

	// 	for (unsigned int i = 0; i < b.size(); i++) {
	// 		b[i] = i;
	// 	}
	// 	for (unsigned int i = 0; i < b.size(); i++) {
	// 		std::cout << "b["<< i << "] = " << b[i] << std::endl;
	// 	}
	// 	a = b;
	// 	std::cout << std::endl;
	// 	for (unsigned int i = 0; i < a.size(); i++) {
	// 		std::cout << "a["<< i << "] = " << a[i] << std::endl;
	// 	}

	// 	std::cout << std::endl;
	// 	std::cout << "a[1] = "<< a[1] << std::endl;

	// 	std::cout << std::endl;
	// 	Array<int> d(b);
	// 	for (unsigned int i = 0; i < d.size(); i++) {
	// 		std::cout << "d["<< i << "] = " << d[i] << std::endl;
	// 	}
	// 	Array<char> e(3);
	// 	e[0] = 'a';
	// 	e[1] = 'b';
	// 	e[2] = 'c';
	// 	for (unsigned int i = 0; i < e.size(); i++) {
	// 		std::cout << "e["<<i<<"] = "<< e[i] << std::endl;
	// 	}

	// 	Array<std::string> f(1);
	// 	f[0] = "hello";
	// 	f[1] = "world";
	// 	f[2] = "42";
	// 	for (unsigned int i = 0; i < f.size(); i++) {
	// 		std::cout << "f["<<i<<"] = "<< f[i] << std::endl;
	// 	}
	// } catch (const std::exception &e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// return (0);
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}

	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//
	return 0;
}
