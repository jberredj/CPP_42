/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 12:23:05 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/07 12:35:49 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int ac, char **av)
{
	Karen		karen;
	std::string	level("");

	if (ac > 1)
		level = std::string(av[1]);
	karen.complain(level);
	return (0);
}