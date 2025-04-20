/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:01:09 by beyarsla          #+#    #+#             */
/*   Updated: 2025/04/20 15:01:10 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
    std::cout << "Weapon " << type << " has been created" << std::endl;
}
Weapon::~Weapon()
{
    std::cout << "Weapon " << type << " has been destroyed" << std::endl;
}
void Weapon::setType(std::string type)
{
    this->type = type;
}
const std::string& Weapon::getType() const
{
    return this->type;
}
