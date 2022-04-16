/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:48:31 by jberredj          #+#    #+#             */
/*   Updated: 2022/04/16 18:09:26 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <cstdlib>
#include <iostream>
#include "Span.hpp"

int	main(void)
{
	Span	span1(5);

	span1.addNumber(4);
	try
	{
		std::cout << span1.shortest_span() << std::endl;
		std::cout << span1.longest_span() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	span1.addNumber(7);
	std::cout << span1.shortest_span() << std::endl;
	std::cout << span1.longest_span() << std::endl << std::endl;
	span1.addNumber(2);
	std::cout << span1.shortest_span() << std::endl;
	std::cout << span1.longest_span() << std::endl << std::endl;
	span1.addNumber(6);
	std::cout << span1.shortest_span() << std::endl;
	std::cout << span1.longest_span() << std::endl << std::endl;
	span1.addNumber(25);
	std::cout << span1.shortest_span() << std::endl;
	std::cout << span1.longest_span() << std::endl << std::endl;
	try
	{
		span1.addNumber(4);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << span1.shortest_span() << std::endl;
	std::cout << span1.longest_span() << std::endl << std::endl;


	Span	span2(5000000);

	span2.addNumber(150);
	span2.addNumber(151);
	std::cout << span2.shortest_span() << std::endl;
	std::cout << span2.longest_span() << std::endl << std::endl;
	std::vector<int>	vect;

	for(int i = 0; i < 10000; i++)
		vect.push_back(rand() % 300);
	span2.addNumber(vect.begin(), vect.end());
	std::cout << span2.get_max_stored() << " , " <<  span2.get_stored() << std::endl;
	std::cout << span2.shortest_span() << std::endl;
	std::cout << span2.longest_span() << std::endl;
}