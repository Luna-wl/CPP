#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA {
	private:
		std::string name;
		Weapon &_weapon;
	public:
		HumanA( const std::string _name, Weapon &weapon );
		~HumanA();
		void attack();
};

#endif
