#include "easyfind.hpp"

int main() {
	int arr[] = {1, 2, 3, 4, 5, 6};
	std::vector<int>	ar(arr, arr + 6);

	try {
		std::cout << easyfind(ar, 4) << std::endl;
	}
	catch ( const std::exception &e ) {
		std::cout << "Exception occurred: " << e.what() << std::endl;
	}
}
