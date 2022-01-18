/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:20:48 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/18 06:58:31 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
private:
	const Fixed	x;
	const Fixed y;
public:
				Point(void);
				Point(const Point &obj);
				Point(const float new_x, const float new_y);
				~Point(void);

	Point		&operator=(const Point &to_asign);

	const Fixed get_x(void) const;
	const Fixed get_y(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
#endif