/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 21:59:41 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/10 22:14:31 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal(void)
: type("An animal")
{
}

Animal::~Animal()
{
}

void		Animal::makeSound(void) const
{
	std::cout << "An animal sound" << std::endl;
}

const std::string	&Animal::getType(void) const
{
	return (this->type);
}