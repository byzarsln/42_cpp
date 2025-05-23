#ifndef CLAP_TREP_HPP
# define CLAP_TREP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackDamage;
    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string nm);
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator = (const ClapTrap& other);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif