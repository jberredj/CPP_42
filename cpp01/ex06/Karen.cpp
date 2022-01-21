/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 11:52:58 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/07 12:45:48 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Karen.hpp"

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my \
7XL-double-cheese-triple-pickle-special-ketchup burger. \
I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t \
put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout <<  "I think I deserve to have some extra bacon for free. I’ve been \
coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level)
{
	int	selected = 4;

	for (int i = 0; i < 4; i++)
		if (level.compare(Karen::_complaint_level[i]) == 0)
			selected = i;
	switch (selected)
	{
	case (DEBUG):
		std::cout << "[ DEBUG ]" << std::endl;
		this->debug();
		__attribute__ ((fallthrough));
	case (INFO):
		std::cout << "[ INFO ]" << std::endl;
		this->info();
		__attribute__ ((fallthrough));
	case (WARNING):
		std::cout << "[ WARNING ]" << std::endl;
		this->warning();
		__attribute__ ((fallthrough));
	case (ERROR):
		std::cout << "[ ERROR ]" << std::endl;
		this->error();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}

Karen::Karen(void)
{
}

Karen::~Karen()
{
}

const std::string	Karen::_complaint_level[4] = {
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR"
};