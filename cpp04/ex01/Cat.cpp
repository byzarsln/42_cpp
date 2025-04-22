#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat Default Constructor called! 😻" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat Destructor called! 😻" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	this->brain = new Brain(*copy.brain);
	this->type = copy.type;
	std::cout << "Cat Copy Constructor called! 😻" << std::endl;
}

Cat &Cat::operator = (const Cat &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
		delete this->brain;
		this->brain = new Brain(*copy.brain);
	}
	std::cout << "Cat assigment operator has been called! 😻" << std::endl;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meoww! 😻" << std::endl;
}

void Cat::setCatIdea(std::string str)
{
	brain->setAllIdeas(str);
}

void Cat::printIdea(int i)
{
	this->brain->printNIdea(i);
}

void Cat::printBrainAddress()
{
	std::cout << this->brain << std::endl;
}
