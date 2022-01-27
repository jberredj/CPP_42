/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:09:42 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/27 14:07:30 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
: _name("Default"), _hit_points(10), _energy_points(10),
	_total_energy(_energy_points), _attack_damage(0)
{
	std::cout << "ClapTrap default constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
: _name(src._name), _hit_points(src._hit_points), 
	_energy_points(src._energy_points),
	_total_energy(src._total_energy),
	_attack_damage(src._attack_damage)
{
	std::cout << "ClapTrap copy constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
: _name(name), _hit_points(10), _energy_points(10),
	_total_energy(_energy_points), _attack_damage(0)
{	
	std::cout << "ClapTrap name constructor: " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor on " << this->_name << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &src)
{
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << this->_name << " attack " << target
	<< ", causing " << this->_attack_damage <<  " points of damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_energy_points < 1)
	{
		std::cout << "ClapTrap " << this->_name 
			<< " can't take damage anymore !" << std::endl;
		return ;
	}
	this->_energy_points -= amount;
	std::cout << "ClapTrap " << this->_name << " took "
		<< ((this->_energy_points < 1) ? amount + this->_energy_points : amount)
		<< " damage. ";
	if (this->_energy_points < 1)
	{
		this->_energy_points = 0;
		std::cout << "And died from it." << std::endl;
	}
	else
	{
		std::cout << this->_energy_points << " energy points left." << std::endl;
	}
	return ;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	int	extra;

	extra = this->_energy_points + amount - this->_total_energy;
	if (this->_energy_points > this->_total_energy - 1)
	{
		std::cout << "ClapTrap " << this->_name 
			<< " can't be repaired anymore !" << std::endl;
		return ;
	}
	this->_energy_points += amount;
	std::cout << "ClapTrap " << this->_name << " repaired, "
		<< ((extra) ?
			amount - extra : amount)
		<< " energy points gained." << std::endl;
	return ;
}

std::string	ClapTrap::get_name(void) const
{
	return (this->_name);
}

int	ClapTrap::get_attack_damage(void)
{
	return (this->_attack_damage);
}

void	ClapTrap::set_attack_damage(int nbr)
{
	if (nbr < 0)
		this->_attack_damage = 0;
	else
		this->_attack_damage = nbr;
}