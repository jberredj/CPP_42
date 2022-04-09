/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 22:02:58 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 12:27:53 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = std::string("Cat");
}

Cat::Cat(const Cat &src)
{
	this->type = src.type;
}

Cat::~Cat()
{
}

Cat	&Cat::operator=(const Cat &src)
{
	this->type = src.type;
	return (*this);
}

void		Cat::makeSound(void) const
{
	std::cout << "Miaou..." << std::endl;
}