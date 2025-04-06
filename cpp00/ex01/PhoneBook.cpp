#include "PhoneBook.hpp"

bool isDigitCont(std::string str)
{
    unsigned long i;
    for (i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]))
            return false;
    }
    return true;
}

std::string checkInput(std::string field, int type)
{
    while(1)
    {
        std::string input;
        std::cout << field << ": ";
        std::getline(std::cin, input);
        if (std::cin.eof())
            std::exit(0);
        if (type == 4 && !isDigitCont(input))
        {
            std::cout << "Invalid input! Please enter a valid phone number." << std::endl;
            continue;
        }
        if (input.empty())
            std::cout << field << " cannot be empty!" << std::endl;
        else
            return input;
    }
    return NULL;
}

int PhoneBook::add()
{
    static int index = 0;
    std::string firstName = checkInput("First Name", 1);
    this->persons[index % 8].setFirstName(firstName);
    std::string lastName = checkInput("Last Name", 2);
    this->persons[index % 8].setLastName(lastName);
    std::string nickName = checkInput("Nick Name", 3);
    this->persons[index % 8].setNickName(nickName);
    std::string phoneNumber = checkInput("Phone Number", 4);
    this->persons[index % 8].setPhoneNumber(phoneNumber);
    std::string darkestSecret = checkInput("Darkest Secret", 5);
    this->persons[index % 8].setDarkestSecret(darkestSecret);
    index++;
    if (this->cperson_count < 8)
        this->cperson_count++;
    return 1;
}

int PhoneBook::search()
{
    int i = 0;
    if (this->cperson_count == 0)
    {
        std::cout << "PhoneBook is empty!" << std::endl;
        return 1;
    }
    std::cout << "~~~~~~~~~~~~~~~~~~PHONEBOOK~~~~~~~~~~~~~~~~~~" << std::endl;
    std::cout << "+----------+------------+-----------+----------+" << std::endl;
	std::cout << "|   index  | first name | last name | nickname |" << std::endl;
	std::cout << "+----------+------------+-----------+----------+" << std::endl;
    while (i < this->cperson_count){
        std::cout << "|" << std::setw(10) << i << "|";
        std::cout << std::setw(10) << persons[i].getFirstName().substr(0, 10) << "|";
        std::cout << std::setw(10) << persons[i].getLastName().substr(0, 10) << "|";
        std::cout << std::setw(10) << persons[i].getNickName().substr(0, 10) << "|" << std::endl;
	    std::cout << "+----------+------------+-----------+----------+" << std::endl;
        i++;
    }
    while(1)
    {
        std::cout << "+----------+----------+----------+----------+" << std::endl;
	    std::cout << "|  Contact information for specified index  |" << std::endl;
        std::cout << "|       Please enter the contact index      |" << std::endl;
	    std::cout << "+----------+----------+----------+----------+" << std::endl;
        std::string index;
        std::getline(std::cin, index);
        if (std::cin.eof())
            return 0;
        if (index.empty() || !isDigitCont(index))
        {
            std::cout << "Invalid input! Please enter a valid index." << std::endl;
            continue;
        }
        int selectedIndex = std::atoi(index.c_str());
        if (selectedIndex >= 0 && selectedIndex < this->cperson_count)
        {
            std::cout << "First Name: " << persons[selectedIndex].getFirstName() << std::endl;
            std::cout << "Last Name: " << persons[selectedIndex].getLastName() << std::endl;
            std::cout << "Nick Name: " << persons[selectedIndex].getNickName() << std::endl;
            std::cout << "Phone Number: " << persons[selectedIndex].getPhoneNumber() << std::endl;
            std::cout << "Darkest Secret: " << persons[selectedIndex].getDarkestSecret() << std::endl;
            return 1;
        }
        else{
            std::cout << "Invalid index! Please enter valid number." << std::endl;
            continue;
        }
    }
    return 1;
}

void PhoneBook::exit()
{
    std::cout << "Exited PhoneBook..." << std::endl;
    std::exit(0);
}
