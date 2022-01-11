/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 22:02:58 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 15:05:38 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = std::string("Dog");
	this->brain = new Brain();
}

Dog::Dog(const Dog &src) : Animal()
{
	this->type = src.type;
	this->brain = src.brain;
}

Dog	&Dog::operator=(const Dog &src)
{
	this->type = src.type;
	this->brain = src.brain;
	return (*this);
}

Dog::~Dog()
{
	delete (this->brain);
}

void		Dog::makeSound(void) const
{
	std::cout << "Bark Bark !!" << std::endl;
}