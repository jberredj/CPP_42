/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 09:48:07 by jberredj          #+#    #+#             */
/*   Updated: 2022/04/10 18:03:19 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Converter.hpp"

int	main (int ac, char **av)
{
	int			i = 1;
	Converter	conv;

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
	}
	return (0);
}
