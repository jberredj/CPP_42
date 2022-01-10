/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 19:44:38 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/10 21:28:19 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	default_clap;
	ScavTrap	linus("Linus");
	FragTrap	timmy("Timmy");
	DiamondTrap	steve("Steve");

	steve.whoAmI();
	default_clap.attack(linus.get_name());
	linus.takeDamage(default_clap.get_attack_damage());
	linus.beRepaired(10);
	linus.set_attack_damage(42069);
	linus.attack(default_clap.get_name());
	default_clap.takeDamage(linus.get_attack_damage());
	linus.attack(steve.get_name());
	steve.takeDamage(linus.get_attack_damage());
	timmy.highFivesGuys();
	default_clap.takeDamage(timmy.get_attack_damage());
	linus.takeDamage(timmy.get_attack_damage());
	linus.set_attack_damage(12);
	linus.attack(default_clap.get_name());
	default_clap.takeDamage(linus.get_attack_damage());
	default_clap.beRepaired(2);
	linus.set_attack_damage(10);
	linus.attack(default_clap.get_name());
	default_clap.takeDamage(10);
	linus.attack(timmy.get_name());
	timmy.takeDamage(linus.get_attack_damage());
	linus.guardGate();
	return (0);
}