#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
    {
        std::cout << "🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶🐶" << std::endl;

        Dog* j = new Dog();
        Dog* copyJ = new Dog(*j);
        
        std::cout << std::endl;
    
        std::cout << j->getType() << " " << std::endl;
        j->makeSound();
        j->setDogIdea("Ball Ball Ball");

        std::cout << "What is dog thinking?" << std::endl;
        j->printNidea(2);
        std::cout << std::endl;


        std::cout << "Original Dog Brain:" << std::endl;
        j->printBrainAddress();

        std::cout << "Copy Dog Brain:" << std::endl;
        copyJ->printBrainAddress();

        std::cout << std::endl;
        delete j;
        delete copyJ;
    }

    std::cout << std::endl;
    std::cout << "r-----------------------------------" << std::endl;
    std::cout << std::endl;

    {
        std::cout << "😻😻😻😻😻😻😻😻😻😻😻😻😻😻😻😻😻😻😻😻" << std::endl;
        Cat* i = new Cat();
        Cat* copyI = new Cat(*i);

    
        std::cout << std::endl;

        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        i->setCatIdea("Fİsh Fish Fish");

        std::cout << "What is cat thinking?" << std::endl;
        i->printIdea(2);
        std::cout << std::endl;


        std::cout << "Original Cat Brain:" << std::endl;
        i->printBrainAddress();

        std::cout << "Copy Cat Brain:" << std::endl;
        copyI->printBrainAddress();

        std::cout << std::endl;
        delete copyI;
        delete i;
    }

    std::cout << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << std::endl;
    
    {
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* cat = new WrongCat();
    
        std::cout << std::endl;
    
        std::cout << meta->getType() << " " << std::endl;
        std::cout << cat->getType() << " " << std::endl;
    
        std::cout << std::endl;
    
        meta->makeSound();
        cat->makeSound();
    
        std::cout << std::endl;
        delete meta;
        delete cat;
    }

    return 0;
}
