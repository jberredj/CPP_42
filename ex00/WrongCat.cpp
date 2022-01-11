/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 22:02:58 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/10 22:16:20 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = std::string("WrongCat");
}

WrongCat::WrongCat(const WrongCat &src)
{
	this->type = src.type;
}

WrongCat::~WrongCat()
{
}

WrongCat	&WrongCat::operator=(const WrongCat &src)
{
	this->type = src.type;
	return (*this);
}


void		WrongCat::makeSound(void) const
{
	std::cout << "mIaOUuuu..." << std::endl;
}