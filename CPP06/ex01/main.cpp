#include "Serializer.hpp"

int main(int ac, char **av) {
	Data a;

	a.charac = 'F';
	a.num = 42;

	std::cout << "a->charac: " << a.charac << std::endl;
	std::cout << "a->num: " << a.num << std::endl << std::endl;

	uintptr_t serialized = Serializer::serialize( &a );
	std::cout << "serialized: " << serialized << std::endl << std::endl;

	Data *deserialized = Serializer::deserialize( serialized );

	std::cout << "deserialized->charac: " << deserialized->charac << std::endl;
	std::cout << "deserialized->num: " << deserialized->num << std::endl;

	return 0;
}
