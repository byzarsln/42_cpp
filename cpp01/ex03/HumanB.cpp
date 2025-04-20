/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:01:01 by beyarsla          #+#    #+#             */
/*   Updated: 2025/04/20 15:01:02 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
    std::cout << "HumanB " << this->name << " has been created" << std::endl;
}
HumanB::~HumanB()
{
    std::cout << "HumanB " << this->name << " has been destroyed" << std::endl;
}
void HumanB::attack()
{
    if (this->weapon == NULL)
        std::cout << this->name << " has no weapon " << std::endl;
    else
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}