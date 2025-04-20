#include "Zombie.hpp"

Zombie::Zombie()
{
    static int i = 1;
    this->zombieCount = i;
    std::cout << "Zombie " << i << " created." << std::endl;
    i++;
}
Zombie::~Zombie()
{
    std::cout << "Zombie " << this->zombieCount << " destructor called" << std::endl;
}
void Zombie::announce(void)
{
    std::cout << "Zombie " << this->zombieCount <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setName(std::string name)
{
    this->_name = name;
}
