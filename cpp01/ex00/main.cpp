/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:00:10 by beyarsla          #+#    #+#             */
/*   Updated: 2025/04/20 15:00:11 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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