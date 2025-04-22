#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog default constructor called! 🐶" << std::endl;
}
Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog copy constructor called! 🐶" << std::endl;
}
Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog copy assignment operator has been called! 🐶" << std::endl;
    if(this != &other)
    {
        this->type = other.type;
    }
    return *this;
}
Dog::~Dog()
{
    std::cout << "Dog has been destroyed! 🐶" << std::endl;
}
void Dog::makeSound() const
{
    std::cout << "Woof Wooff! 🐶" << std::endl;
}
