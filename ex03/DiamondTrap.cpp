/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:52:57 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/27 14:42:51 by ddiakova         ###   ########.fr       */
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

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	ClapTrap::operator=(src);
	this->_name = src._name;
	std::cout << "DiamondTrap copy constructor" << std::endl;
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

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &src)
{
	ClapTrap::operator=(src);
	this->_name = src._name;
	std::cout << "DiamondTrap operator= called" << std::endl;
	return (*this);
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "Hi, my name is " << this->_name
		<< ", and my ClapTrap name is " << ClapTrap::_name << std::endl;
}