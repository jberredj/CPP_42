/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:20:54 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/18 06:58:18 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

Point::Point(void)
: x(0), y(0)
{
}

Point::Point(const float new_x, const float new_y)
: x(new_x), y(new_y)
{
}


Point::Point(const Point &obj)
: x(obj.x), y(obj.y)
{
	*this = obj;
}

Point::~Point()
{
}

// Useless operator=, x and y are const, and therefor can't be changed.
Point	&Point::operator=(const Point &to_asign)
{
	(void)to_asign;
	return (*this);
}

const Fixed Point::get_x(void) const
{
	return (this->x);
}

const Fixed Point::get_y(void) const
{
	return (this->y);
}
