/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:52:57 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/10 21:26:15 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string name)
{
	ClapTrap::_name = name + "_clap_name";
	this->_name = name;
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	this->_total_energy = this->_energy_points;
	std::cout << "DiamondTrap name constructor: " << name << std::endl;
	return;
}

DiamondTrap::DiamondTrap(void)
{
	ClapTrap::_name =  "Default_clap_name";
	this->_name = "Default";
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	this->_total_energy = this->_energy_points;
	std::cout << "DiamondTrap default constructor" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor on " << this->_name << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Hi, my name is " << this->_name
		<< ", and my ClapTrap name is " << ClapTrap::_name << std::endl;
}