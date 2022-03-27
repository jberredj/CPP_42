/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:44:38 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/10 20:01:45 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	default_clap;
	ClapTrap	linus("Linus");

	default_clap.set_attack_damage(3);
	default_clap.attack(linus.get_name());
	linus.takeDamage(default_clap.get_attack_damage());
	linus.beRepaired(10);
	linus.set_attack_damage(42069);
	linus.attack(default_clap.get_name());
	default_clap.takeDamage(linus.get_attack_damage());
	linus.set_attack_damage(12);
	linus.attack(default_clap.get_name());
	default_clap.takeDamage(linus.get_attack_damage());
	default_clap.beRepaired(2);
	linus.set_attack_damage(10);
	linus.attack(default_clap.get_name());
	default_clap.takeDamage(10);
	return (0);
}