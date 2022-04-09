/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:24:43 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 20:06:51 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure(void)
{
	this->_type = "cure";
}

Cure::Cure(const Cure &src) : AMateria()
{
	this->_type = src._type;
}

Cure::~Cure(void)
{
}

Cure	&Cure::operator=(const Cure &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}