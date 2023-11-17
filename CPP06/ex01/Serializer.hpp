#ifndef SERIALIZER_H
# define SERIALIZER_H

# include <iostream>
# include <stdint.h>

typedef struct Data {
	char	charac;
	int		num;
} Data;

class Serializer {
	public:
		Serializer();
		~Serializer();

		Serializer( const Serializer &cp );
		Serializer &operator=( const Serializer &cp );

		static uintptr_t serialize( Data* ptr );
		static Data* deserialize( uintptr_t raw );
};

#endif
