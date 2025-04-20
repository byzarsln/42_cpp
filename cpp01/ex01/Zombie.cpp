/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:00:40 by beyarsla          #+#    #+#             */
/*   Updated: 2025/04/20 15:00:41 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    static int i = 1;
    this->zombieCount = i;
    std::cout << "Zombie " << i << " created." << std::endl;
    i++;
}
Zombie::~Zombie()
{
    std::cout << "Zombie " << this->zombieCount << " destructor called" << std::endl;
}
void Zombie::announce(void)
{
    std::cout << "Zombie " << this->zombieCount <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setName(std::string name)
{
    this->_name = name;
}
