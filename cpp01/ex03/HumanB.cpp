#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(nullptr)
{
    std::cout << "HumanB " << this->name << " has been created" << std::endl;
}
HumanB::~HumanB()
{
    std::cout << "HumanB " << this->name << " has been destroyed" << std::endl;
}
void HumanB::attack()
{
    if (this->weapon == NULL)
        std::cout << this->name << " has no weapon " << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}