/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 22:02:58 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 12:30:12 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = std::string("Dog");
}

Dog::Dog(const Dog &src)
{
	this->type = src.type;
}

Dog	&Dog::operator=(const Dog &src)
{
	this->type = src.type;
	return (*this);
}

Dog::~Dog()
{
}

void		Dog::makeSound(void) const
{
	std::cout << "Bark Bark !!" << std::endl;
}