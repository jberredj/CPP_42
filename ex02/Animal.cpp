/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 21:59:41 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/27 16:01:53 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal(void)
: type("An animal")
{
}

Animal::Animal(const Animal &src)
{
	this->type = src.type;
}

Animal::~Animal()
{
}

Animal	&Animal::operator=(const Animal &src)
{
	this->type = src.type;
	return (*this);
}

const std::string	&Animal::getType(void) const
{
	return (this->type);
}