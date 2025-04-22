#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Wrong Animal default constructor called! 🐔" << std::endl;
    type = "Unknown";
}
WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "Wrong Animal copy constructor called! 🐔" << std::endl;
    *this = other;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "Wrong Animal copy assignment operator has been called! 🐔" << std::endl;
    
    if(this != &other)
        type = other.type;
    return *this;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animal destructor called! 🐔" << std::endl;
}
void WrongAnimal::makeSound() const
{
    std::cout << "Wrong Animal make sound! 🐔" << std::endl;
}
std::string WrongAnimal::getType() const
{
    return type;
}
