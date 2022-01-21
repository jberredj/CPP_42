/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 11:28:39 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/06 11:54:52 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

int main(void)
{
	Zombie	main1("main1");
	Zombie	main2("main2");
	Zombie	*heap;

	main1.announce();
	randomChump("random1");
	heap = newZombie("Heap Zombie 1");
	main2.announce();
	delete (heap);
	heap = newZombie("Heap Zombie 2");
	randomChump("random2");
	delete (heap);
	return (0);
}