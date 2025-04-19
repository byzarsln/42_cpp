#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
    std::cout << "Weapon " << type << " has been created" << std::endl;
}
Weapon::~Weapon()
{
    std::cout << "Weapon " << type << " has been destroyed" << std::endl;
}
void Weapon::setType(std::string type)
{
    this->type = type;
}
const std::string& Weapon::getType() const
{
    return this->type;
}
