/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:19:15 by jberredj          #+#    #+#             */
/*   Updated: 2022/03/20 17:15:22 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_name = std::string("Default Scav");
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_total_hp = this->_total_hp;
	std::cout << "ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(const std::string name)
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_total_hp = this->_energy_points;
	std::cout << "ScavTrap name constructor: " << name << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	this->_total_hp = src._total_hp;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor on " << this->_name << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &src)
{
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energy_points <= 0)
	{
		std::cout << "ScavTrap " << this->_name
			<< " doesn't have enough energy points to attack" << std::endl;
		return ;
	}
	this->_energy_points--;
	std::cout << "ClapTrap " << this->_name << " attack " << target
	<< ", causing " << this->_attack_damage <<  " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " enter gate keeper mode." << std::endl;
}