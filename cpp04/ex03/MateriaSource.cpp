/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 18:00:00 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 20:10:32 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
: _number_loaded(0)
{
	for (int i = 0; i < MateriaSource::_max_materias; i++)
		this->_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	for (int i = 0; i < src._number_loaded; i++)
		this->_materias[i] = src._materias[i];
	this->_number_loaded = src._number_loaded;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < this->_number_loaded; i++)
		delete (this->_materias[i]);
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs)
{
	for (int i = 0; i < rhs._number_loaded; i++)
		this->_materias[i] = rhs._materias[i];
	this->_number_loaded = rhs._number_loaded;
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *new_materia)
{
	if (new_materia == NULL)
		return ;
	if (this->_number_loaded >= MateriaSource::_max_materias)
	{
		std::cout << "Can't learn any more Materia !" << std::endl;
		return ;
	}
	this->_materias[this->_number_loaded] = new_materia;
	this->_number_loaded++;
	std::cout << "Materia " << new_materia->getType() << " Learned" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < this->_number_loaded; i++)
	{
		if (this->_materias[i]->getType() == type)
			return (this->_materias[i]->clone());
	}
	return (NULL);
}