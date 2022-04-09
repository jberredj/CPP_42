/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 22:02:58 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/27 15:56:28 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = std::string("Dog");
	this->brain = new Brain();
	std::cout << this->get_idea(rand() % 100) <<std::endl;
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

const std::string	Dog::get_idea(int index) const
{
	return (this->brain->get_idea(index));
}