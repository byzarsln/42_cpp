#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap clap("Byz");
    clap.attack("Enemy");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "---------------------" << std::endl;

    ScavTrap scav("Scav");
    scav.attack("Enemy");
    scav.guardGate();

    std::cout << "---------------------" << std::endl;

    FragTrap frag("Frag");
    frag.attack("Enemy");
    frag.highFivesGuys();

    return 0;
}
