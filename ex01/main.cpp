/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:44:38 by jberredj          #+#    #+#             */
/*   Updated: 2022/03/20 16:22:52 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	default_clap;
	ScavTrap	linus("Linus");

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
	linus.guardGate();
	return (0);
}