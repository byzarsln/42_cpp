#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{
protected:
	std::string type;
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal &copy);
	Animal &operator = (const Animal &copy);

	std::string getType() const;
	virtual void makeSound() const = 0;
};

#endif
