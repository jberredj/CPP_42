/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:35:56 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/06 12:19:49 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

void	Zombie::_print_name(void) const
{
	std::cout << "<" << this->_name << "> ";
}

void	Zombie::announce(void)
{
	this->_print_name();
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}

Zombie::Zombie()
{}

Zombie::~Zombie()
{
	this->_print_name();
	std::cout << "Sweet death, again..." << std:: endl;
}
