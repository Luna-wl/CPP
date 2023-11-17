#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB {
	private:
		std::string name;
		Weapon *_weapon;
	public:
		HumanB( const std::string name );
		~HumanB();
		void attack();
		void setWeapon( Weapon &newWeapon );
};

#endif
