#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string>

class Weapon {
	private:
		std::string type;
	public:
		Weapon( const std::string str );
		~Weapon();
		void setType( const std::string str );
		const std::string &getType();
};

#endif
