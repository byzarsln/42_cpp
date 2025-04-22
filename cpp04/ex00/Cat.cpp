#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat default constructor called! 😻" << std::endl;
}
Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat copy constructor called! 😻" << std::endl;
}
Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat copy assignment operator has been called! 😻" << std::endl;
    if(this != &other)
    {
        this->type = other.type;
    }
    return *this;
}
Cat::~Cat()
{
    std::cout << "Cat has been destroyed! 😻" << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "Meow Meoww! 😻" << std::endl;
}
