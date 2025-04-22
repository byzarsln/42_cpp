#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& ref);
		WrongAnimal& operator=(const WrongAnimal& ref);
		std::string getType() const;

		virtual ~WrongAnimal();
		virtual void makeSound() const;
};

#endif
