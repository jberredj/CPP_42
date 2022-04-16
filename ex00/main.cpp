/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:58:21 by jberredj          #+#    #+#             */
/*   Updated: 2022/04/16 17:56:53 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <vector>
#include "easyfind.hpp"

template<typename T>
void	print_finding(T it_vec, T end_vec)
{
	if (it_vec == end_vec)
		std::cout << "not in vectors" << std::endl;
	else
		std::cout << "it: " << *it_vec << std::endl;
}

int main(void)
{
	{
		std::vector<int>			i_vec;
		std::vector<int>::iterator	i_vec_it;

		for (size_t i = 0; i < 15; i++)
			i_vec.push_back(i + 1);
		i_vec_it = easyfind(i_vec, 2);
		print_finding(i_vec_it, i_vec.end());
		i_vec_it = easyfind(i_vec, 21);
		print_finding(i_vec_it, i_vec.end());
	}
	{
		std::list<int>				i_lis;
		std::list<int>::iterator	i_lis_it;

		for (size_t i = 0; i < 15; i++)
			i_lis.push_back(i + 1);
		i_lis_it = easyfind(i_lis, 2);
		print_finding(i_lis_it, i_lis.end());
		i_lis_it = easyfind(i_lis, 21);
		print_finding(i_lis_it, i_lis.end());
	}
}