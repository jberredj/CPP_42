/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 12:13:14 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/06 12:41:53 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <sstream>
#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie				*horde;
	std::ostringstream	indiviual_name;

	if (N < 1)
		return (NULL);
	horde = new Zombie[N];
	if (!horde)
		return (NULL);
	for (int i = 0; i < N; i++)
	{
		indiviual_name.str("");
		indiviual_name << name << " "  << i;
		horde[i].set_name(indiviual_name.str());
	}
	return (horde);
}