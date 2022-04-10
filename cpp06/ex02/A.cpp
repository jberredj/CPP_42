/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:08:00 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/12 16:24:12 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "A.hpp"

A::A(void)
{
	std::cout << "A constructed" << std::endl;
}

A::A(const A &src)
{
	*this = src;
}

A::~A(void)
{
}

A	&A::operator=(const A &rhs)
{
	(void)rhs;
	return (*this);
}
