#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    FragTrap ft("Fah");

    ft.attack("Tatar");
    // ft.attack("Tatar");
    // ft.attack("Tatar");

    ft.takeDamage(10);
    ft.beRepaired(10);
    ft.highFivesGuys();
    std::cout << std::endl;
}
