#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Wrong Cat default constructor called! 🙀" << std::endl;
    type = "Wrong Cat";
}
WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << "Wrong Cat copy constructor called! 🙀" << std::endl;
    *this = other;
}
WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "Wrong Cat copy assignment operator has been called!🙀" << std::endl;
    
    if(this != &other)
        type = other.type;
    return *this;
}
WrongCat::~WrongCat()
{
    std::cout << "Wrong Cat destructor called! 🙀" << std::endl;
}
void WrongCat::makeSound() const
{
    std::cout << "Wrong Cat make sound! 🙀" << std::endl;
}

