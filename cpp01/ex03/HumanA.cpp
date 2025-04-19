#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon)
{
    std::cout << "HumanA " << this->name << " has been created" << std::endl;
}
HumanA::~HumanA()
{
    std::cout << "HumanA " << this->name << " has been destroyed" << std::endl;
}
void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
