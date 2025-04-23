#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Cat Default Constructor called!😻" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called!😻" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	*this = copy;
	std::cout << "Cat Copy Constructor called!😻" << std::endl;
}

Cat &Cat::operator = (const Cat &copy)
{
	if (this != &copy)
		this->type = copy.type;
	std::cout << "Cat assigment operator has been called!😻" << std::endl;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meoww..😻" << std::endl;
}
