/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:45:43 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/06 16:23:48 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacked using " << this->_weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon)
:_name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}
