/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:54:15 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/12 17:01:58 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <cstddef>

template<typename T>
void iter(T *array, size_t size, void (*f)(T &))
{
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}

#endif