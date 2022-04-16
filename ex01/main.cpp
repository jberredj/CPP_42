/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:40:30 by jberredj          #+#    #+#             */
/*   Updated: 2022/04/10 21:05:52 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <string>
#include "iter.hpp"

void	init(std::string &str)
{
	str = "Inited by Iter";
}

void	append_rand(std::string &str)
{
	str += (rand() % 24) + 65;
}

template<typename T>
void	print(T &elem)
{
	std::cout << elem << std::endl;
}

int	main(void)
{
	std::string	array[15];
	
	::iter(array, 15, &init);
	::iter(array, 15, &print);
	std::cout << std::endl;
	::iter(array, 15, &append_rand);
	::iter(array, 15, &print);
	int			new_arr[20];
	for (int i = 0; i < 20; i++)
		new_arr[i] = i;
	::iter(new_arr, 20, &print);
}