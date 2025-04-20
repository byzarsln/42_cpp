/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beyarsla <beyarsla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 15:01:35 by beyarsla          #+#    #+#             */
/*   Updated: 2025/04/20 15:01:36 by beyarsla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl
				<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" 
				<< std::endl << std::endl;
}
void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl
				<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" 
				<< std::endl << std::endl;
}
void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl
				<< "I think I deserve to have some extra bacon for free." << std::endl
                << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}
void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl
				<< "This is unacceptable! I want to speak to the manager now." 
				<< std::endl << std::endl;
}

void Harl::complain(std::string level)
{
	int levelIndex = -1;
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			levelIndex = i;
			break;
		}
	}
	switch (levelIndex)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break;	
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
