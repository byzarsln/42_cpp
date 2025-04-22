#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "Wrong Animal";
    std::cout << "WrongAnimal default constructor called! 🐔" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    *this = other;
    std::cout << "Wrong Animal copy constructor called! 🐔" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "Wrong Animal copy assignment operator has been called! 🐔" << std::endl;
    if(this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Wrong Animal has been destroyed! 🐔" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong Animal make sound! 🐔" << std::endl;
}