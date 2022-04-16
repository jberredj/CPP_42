/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:32:50 by jberredj          #+#    #+#             */
/*   Updated: 2022/04/13 11:17:09 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Array.hpp"
#define MAX_VAL 750

void	test_modif_str(Array<std::string> &obj)
{
	try
	{
		obj[3] = "YES"; // This should not change the value in the main func
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main(void)
{
	{
		Array<int>          i_arr;
		Array<std::string>  str_arr(5);
		Array<std::string>  cp_str_arr(10);

		try
		{
			i_arr[1];
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << "i_arr size: " << i_arr.size()<< std::endl;

		Array<int>		initialized(10);

		for (int i = 0; i < 10; i++)
			initialized[i] =  i * (i % 3 + 1);
		for (int i = 0; i < 10; i++)
			std::cout << initialized[i] << " ";
		std::cout << std::endl;

		str_arr[0] = "Hi";
		str_arr[1] = " I'm";
		str_arr[2] = " a";
		str_arr[3] = " test";
		str_arr[4] = " array";

		try
		{
			str_arr[5] = "OOB";
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		cp_str_arr = str_arr;

		std::cout << "cp_str_arr: ";
		for (size_t i = 0; i < 5; i++)
			std::cout << cp_str_arr[i];
		std::cout << std::endl;
		for (size_t i = 0; i < 5; i++)
			cp_str_arr[i] = "NO";
		std::cout << "   str_arr: ";
		for (size_t i = 0; i < 5; i++)
			std::cout << str_arr[i];
		std::cout << std::endl;
		std::cout << "cp_str_arr: ";
		for (size_t i = 0; i < 5; i++)
			std::cout << cp_str_arr[i];
		std::cout << std::endl;
		
		Array<std::string>	cp_arr_new(cp_str_arr);

		test_modif_str(cp_arr_new);
		std::cout << "cp_arr_new: ";
		for (size_t i = 0; i < 5; i++)
			std::cout << cp_str_arr[i];
		std::cout << std::endl;
	}
	{ //Subject Main
		Array<int> numbers(MAX_VAL);
		int* mirror = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		//SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = rand();
		}
		delete [] mirror;//
		return 0;
	}
}