/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 22:02:58 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 15:05:20 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = std::string("Cat");
	this->brain = new Brain();
}

Cat::Cat(const Cat &src) : Animal()
{
	this->type = src.type;
	this->brain = src.brain;
}

Cat::~Cat()
{
	delete (this->brain);
}

Cat	&Cat::operator=(const Cat &src)
{
	this->type = src.type;
	this->brain = src.brain;
	return (*this);
}

void		Cat::makeSound(void) const
{
	std::cout << "Miaou..." << std::endl;
}