/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:45:43 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/06 16:23:53 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

bool	HumanB::attack(void)
{
	if (!this->_weapon)
	{
		std::cout << this->_name << "doesn't have a weapon" << std::endl;
		return (false);
	}
	std::cout << this->_name << " attacked using " << this->_weapon->getType() << std::endl;
	return (true);
}

bool	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return (true);
}

HumanB::HumanB(std::string name)
:_name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}
