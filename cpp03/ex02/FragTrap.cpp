#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->name = "Default";
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap default constructor called!" << std::endl;

}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " has been destroyed!" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	this->name = name;
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << name << " has been created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap) : ClapTrap(fragTrap)
{
	*this = fragTrap;
	std::cout << "FragTrap " << fragTrap.name << " has been copied!" << std::endl;	
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap)
{
	if (this != &fragTrap)
	{
		this->name = fragTrap.name;
		this->hitPoint = 100;
		this->energyPoint = 100;
		this->attackDamage = 30;
	}
	std::cout << "FragTrap " << fragTrap.name << " has been assigned!" << std::endl;
	return *this;
	
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << ": Let's high five!" << std::endl;
}
