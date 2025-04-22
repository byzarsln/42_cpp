#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string *ideas;
    public:
        Brain();
        Brain(const Brain& other);
        Brain& operator=(const Brain& other);
        ~Brain();

        void setAllIdeas(std::string idea);
        void printNIdea(int i);
};

#endif