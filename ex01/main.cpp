/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:40:30 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/12 17:05:05 by jberredj         ###   ########.fr       */
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

int	main(void)
{
	std::string	array[15];
	
	::iter(array, 15, &init);
	::iter(array, 15, &print);
	::iter(array, 15, &append_rand);
	::iter(array, 15, &print);
}