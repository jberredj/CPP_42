/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:36:58 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/12 16:46:03 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

template<typename T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
const T	&min(const T &a, const T &b)
{
	if (a < b)
		return (a);
	return (b);
}

template<typename T>
const T	&max(const T &a, const T &b)
{
	if (a > b)
		return (a);
	return (b);
}