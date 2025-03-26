#include "PhoneBook.hpp"

int main()
{
    PhoneBook phoneBook;
    std::string command;

    while (1)
    {
        std::cout  << "~PHONEBOOK~" << std::endl;
        std::cout << "Please enter one of the following three commands:\n1)ADD\n2)SEARCH\n3)EXIT" << std::endl;
        getline(std::cin, command);
        if (std::cin.eof())
            return 0;
        if (command == "ADD")
        {
            if (!phoneBook.add())
                return 0;
        }
        else if (command == "SEARCH")
        {
            if (!phoneBook.search())
                return 0;
        }
        else if (command == "EXIT")
        {
            phoneBook.exit();
            return 0;
        }
        else
            std::cout << "Invalid command!" << std::endl;
    }
    return 0;
}

