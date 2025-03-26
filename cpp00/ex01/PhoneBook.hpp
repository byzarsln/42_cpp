#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include <iomanip>
#include <cstdlib>

class PhoneBook
{
    private:
        Contact persons[8];
        int cperson_count;
    public:
        PhoneBook(): cperson_count(0) {}
        int add();
        int search();
        void exit();
};

#endif