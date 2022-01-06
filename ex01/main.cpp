/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:28:39 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/06 12:43:50 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

int main(void)
{
	Zombie	*horde;

	horde = zombieHorde(15, "Roger");
	if (!horde)
		return (1);
	for (int i = 0; i < 15; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}