/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:08:00 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/12 16:25:14 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "C.hpp"

C::C(void)
{
	std::cout << "C constructed" << std::endl;
}

C::C(const C &src)
{
	*this = src;
}

C::~C(void)
{
}

C	&C::operator=(const C &rhs)
{
	(void)rhs;
	return (*this);
}
