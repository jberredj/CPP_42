/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:22:20 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 20:03:04 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Ice.hpp"

Ice::Ice(void)
{
	this->_type = "ice";
}

Ice::Ice(const Ice &src) : AMateria()
{
	this->_type = src._type;
}

Ice::~Ice(void)
{
}

Ice	&Ice::operator=(const Ice &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}