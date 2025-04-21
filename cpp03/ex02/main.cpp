#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap("Byz");
    clap.attack("enemy");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << std::endl;
    std::cout << "-----------------------"<< std::endl << std::endl;


    ScavTrap scav("Scav");
    scav.attack("enemy");
    scav.guardGate();

    std::cout << std::endl;
    std::cout << "-----------------------"<< std::endl << std::endl;


    FragTrap frag("Frag");
    frag.attack("enemy");
    frag.highFivesGuys();

    std::cout << std::endl;
    std::cout << "-----------------------"<< std::endl << std::endl;


}