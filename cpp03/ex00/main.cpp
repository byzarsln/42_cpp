#include "ClapTrap.hpp"

int main()
{
	ClapTrap first_bot("Byz");
	ClapTrap sec_bot(first_bot);
	ClapTrap third_bot;
	third_bot = first_bot;

	first_bot.attack("Enemy");
	first_bot.takeDamage(5);
	first_bot.beRepaired(3);
	first_bot.attack("Enemy");

	return 0;
}
