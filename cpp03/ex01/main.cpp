#include "ScavTrap.hpp"

int main()
{
	ClapTrap clap("Byz");
	clap.attack("Enemy");
	clap.takeDamage(5);
	clap.beRepaired(3);

	std::cout << "---------------------" << std::endl;

	ScavTrap scav("Scavy");
	scav.attack("Enemy");
	scav.guardGate();

	return 0;
}
