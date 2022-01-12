/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:32:50 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/12 17:38:27 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Array.hpp"

int main(void)
{
	Array<int>          i_arr;
	Array<std::string>  str_arr(5);
	Array<std::string>  cp_str_arr;

	try
	{
		i_arr[1];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "i_arr size: " << i_arr.size()<< std::endl;
	str_arr[0] = "Hi";
	str_arr[1] = " I'm";
	str_arr[2] = " a";
	str_arr[3] = " test";
	str_arr[4] = " array";

	try
	{
		str_arr[5] = " OOB";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	cp_str_arr = str_arr;
	for (size_t i = 0; i < 5; i++)
		std::cout << cp_str_arr[i];
	std::cout << std::endl;
	for (size_t i = 0; i < 5; i++)
		cp_str_arr[i] = "NO";
	for (size_t i = 0; i < 5; i++)
		std::cout << str_arr[i];
	std::cout << std::endl;
	for (size_t i = 0; i < 5; i++)
		std::cout << cp_str_arr[i];
	std::cout << std::endl;
}