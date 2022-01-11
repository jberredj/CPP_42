/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:32:50 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 20:09:05 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

Character::Character(void)
: _name("default_name"), _loaded_materia(0)
{
	for (int i = 0; i < Character::_max_inv; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string name)
: _name(name), _loaded_materia(0)
{
	for (int i = 0; i < Character::_max_inv; i++)
		this->_inventory[i] = NULL;
}

Character::Character(const Character &src)
{
	this->_name = src._name;
	for (int i = 0; i < Character::_max_inv; i++)
		this->_inventory[i] = src._inventory[i];
	this->_loaded_materia = src._loaded_materia;
}

Character::~Character(void)
{
	
	for (int i = 0; i < this->_loaded_materia; i++)
		delete (this->_inventory[i]);
}

Character	&Character::operator=(const Character &rhs)
{
	this->_name = rhs._name;
	for (int i = 0; i < Character::_max_inv; i++)
		this->_inventory[i] = rhs._inventory[i];
	this->_loaded_materia = rhs._loaded_materia;
	return (*this);
}

std::string const	&Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	if (!m)
		return ;
	if (this->_loaded_materia == this->_max_inv)
	{
		std::cout << "Inventory is full, can't equipe Materia" << std::endl;
		return ;
	}
	this->_inventory[this->_loaded_materia] = m;
	std::cout << m->getType() << " materia equiped" << std::endl;
	this->_loaded_materia++;
}

void	Character::unequip(int idx)
{
	int i;
	if (idx >= this->_loaded_materia)
	{
		std::cout << "Can't unequip Materia " << idx << std::endl;
		return ;
	}
	i = idx + 1;
	while (i < Character::_max_inv && this->_inventory[i])
	{
		this->_inventory[i - 1] = this->_inventory[i];
		i++;
	}
	this->_inventory[i] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= this->_loaded_materia)
	{
		std::cout << "No materia equiped in slot " << idx << std::endl;
	}
	this->_inventory[idx]->use(target);
}