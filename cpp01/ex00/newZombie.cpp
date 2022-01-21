/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:03:51 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/06 11:47:12 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie	*new_zombie;

	new_zombie = new Zombie(name);
	if (!new_zombie)
		return (NULL);
	new_zombie->announce();
	return (new_zombie);
}