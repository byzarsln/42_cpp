#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        ~Cat();
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);

        virtual void makeSound() const;
        void setCatIdea(std::string idea);
        void printIdea(int i);
        void printBrainAddress();
};

#endif
