/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:40:30 by jberredj          #+#    #+#             */
/*   Updated: 2022/04/06 16:10:43 by jberredj         ###   ########.fr       */
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

void	print(std::string &str)
{
	std::cout << str << std::endl;
}

template<typename T>
void	print_tpl(T &elem)
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
	std::cout << std::endl;
	::iter(array, 15, &print_tpl);
	int			new_arr[20];
	for (int i = 0; i < 20; i++)
		new_arr[i] = i;
	::iter(new_arr, 20, &print_tpl);
}