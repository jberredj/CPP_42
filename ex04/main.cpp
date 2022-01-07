/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 08:19:02 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/07 09:46:47 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include "Sed.hpp"

int	usage(char	*location)
{
	std::cout << "usage: " << location << " filename s1 s2" << std::endl;
	return (1);
}

int	main(int ac, char **av)
{
	int	error = 0;
	Sed	*sed;

	if (ac != 4)
		return (usage(av[0]));
	sed = new Sed(av + 1);
	if (sed->is_usable())
		sed->replace();
	else
		error = 1;
	delete (sed);
	return (error);
}