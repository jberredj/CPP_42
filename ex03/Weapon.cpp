/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:23:16 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/06 15:40:41 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

bool	Weapon::setType(const std::string &type)
{
	if (type.empty())
	{
		std::cout << "Weapon type need to have a value" << std::endl;
		return (false);
	}
	this->_type = type;
	return (true);
}

const std::string	&Weapon::getType(void) const
{
	return (this->_type);
}

Weapon::Weapon(std::string type)
: _type(type)
{}

Weapon::~Weapon()
{}