/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:54:29 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/12 17:58:05 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>

template<typename T>
typename T::iterator	easyfind(T &container, int to_find)
{
	typename	T::iterator	found = find(container.begin(), container.end(), to_find);
	return (found);
}

#endif