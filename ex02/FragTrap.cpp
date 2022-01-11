/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:37:32 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 11:44:16 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name)
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	this->_total_energy = this->_energy_points;
	std::cout << "FragTrap name constructor: " << name << std::endl;
	return;
}

FragTrap::FragTrap(void)
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	this->_total_energy = this->_energy_points;
	std::cout << "FragTrap default constructor" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points ;
	this->_attack_damage = src._attack_damage;
	this->_total_energy = src._energy_points;
	std::cout << "FragTrap copy constructor" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor on " << this->_name << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &src)
{
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points ;
	this->_attack_damage = src._attack_damage;
	this->_total_energy = src._energy_points;
	std::cout << "FragTrap operator= called" << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << " gave a hive five ! how nice !" << std::endl;
}