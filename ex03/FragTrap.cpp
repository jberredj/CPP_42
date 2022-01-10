/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:37:32 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/10 20:44:08 by jberredj         ###   ########.fr       */
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

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor on " << this->_name << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << " gave a hive five ! how nice !" << std::endl;
}