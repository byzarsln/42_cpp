#include "Zombie.hpp"

int main()
{
    Zombie zombie("Zombb");
    Zombie *newZombiePtr = newZombie("New Zombb");

    zombie.announce();
    newZombiePtr->announce();

    delete newZombiePtr;

    randomChump("Random Chump");
    return 0;
}