/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:39:12 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/10 17:37:34 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Point.hpp"



Fixed	triangle_area(Point const a, Point const b, Point const c)
{
	return (
		roundf((Fixed(0.5f)
		* (a.get_x() * (b.get_y() - c.get_y())
		+ b.get_x() * (c.get_y() - a.get_y())
		+ c.get_x() * (a.get_y() - b.get_y()))
		).abs().toFloat())
	);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	area_t1;
	Fixed	area_t2;
	Fixed	area_t3;
	Fixed	area_t4;

	area_t1 = triangle_area(a, b, c);
	area_t2 = triangle_area(a, b, point);
	area_t3 = triangle_area(a, point, c);
	area_t4 = triangle_area(point, b, c);
	if (area_t2 != 0 && area_t3 != 0 && area_t4 != 0
		&& (area_t2 + area_t3 + area_t4 <= area_t1))
			return (true);
	return (false);
}