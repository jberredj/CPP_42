/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:08:00 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/12 16:24:56 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "B.hpp"

B::B(void)
{
	std::cout << "B constructed" << std::endl;
}

B::B(const B &src)
{
	*this = src;
}

B::~B(void)
{
}

B	&B::operator=(const B &rhs)
{
	(void)rhs;
	return (*this);
}
