#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "Undefined";
	std::cout << "Wrong Animal Default Constructor called!🐔" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
	std::cout << "Wrong Animal Copy Constructor called!🐔" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong Animal Destructor called!🐔" << std::endl;
}

WrongAnimal &WrongAnimal::operator = (const WrongAnimal &copy)
{
	if (this != &copy)
		this->type = copy.type;
	std::cout << "Wrong Animal assigment operator has been called!🐔" << std::endl;
	return *this;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animals make sound!🐔" << std::endl;
}
