/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 21:59:41 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/10 22:14:31 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
: type("An animal")
{
}

WrongAnimal::~WrongAnimal()
{
}

void		WrongAnimal::makeSound(void) const
{
	std::cout << "An animal sound" << std::endl;
}

const std::string	&WrongAnimal::getType(void) const
{
	return (this->type);
}