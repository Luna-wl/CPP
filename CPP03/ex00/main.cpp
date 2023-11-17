#include "ClapTrap.hpp"

int main() {
    ClapTrap a;
    ClapTrap b("Tar");

    a.attack("Tar");

    b.takeDamage(0);
    b.beRepaired(0);

    std::cout << std::endl;

    b.attack("Nobody");
    a.takeDamage(0);
    a.beRepaired(0);
    std::cout << std::endl;
}
