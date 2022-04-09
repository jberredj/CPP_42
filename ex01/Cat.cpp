/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 22:02:58 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/27 15:56:34 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include <cstdlib>

Cat::Cat(void)
{
	this->type = std::string("Cat");
	this->brain = new Brain();
	std::cout << this->get_idea(rand() % 100) <<std::endl;
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

const std::string	Cat::get_idea(int index) const
{
	return (this->brain->get_idea(index));
}