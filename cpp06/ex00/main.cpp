/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 09:48:07 by jberredj          #+#    #+#             */
/*   Updated: 2022/04/10 18:22:40 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Converter.hpp"

int	main (int ac, char **av)
{
	int			i = 1;
	Converter	conv;

	if (ac < 2)
	{
		std::cout << "Arguments error." << std::endl;
		return 1;
	}
	while (i < ac)
	{
		try
		{
			if (av[i][0] == '\0')
				throw(Converter::StringInvalid());
			conv.convert_str(av[i]);
			conv.print_all();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		i++;
		if (i < ac)
			std::cout << std::endl;

	}
	return (0);
}
