#include "WrongCat.hpp"

WrongCat::WrongCat() 
{
    std::cout << "Wrong Cat default constructor called! 🙀" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    *this = other;
    std::cout << "Wrong Cat copy constructor called! 🙀" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "Wrong Cat copy assignment operator has been called! 🙀" << std::endl;
    if(this != &other)
        WrongAnimal::operator=(other);
    return *this;
   
}

WrongCat::~WrongCat()
{
    std::cout << "Wrong Cat has been destroyed! 🙀" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Cat make sound 🙀" << std::endl;
}
