/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:56:16 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/27 17:13:03 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>

class ClapTrap
{
private:
	std::string	_name;
	int			_hit_points;
	int			_energy_points;
	const int	_total_energy;
	int			_attack_damage;
public:
				ClapTrap(void);
				ClapTrap(const ClapTrap &src);
				ClapTrap(std::string name);
				~ClapTrap(void);

	ClapTrap	&operator=(const ClapTrap &src);

	std::string	get_name(void) const;
	int			get_attack_damage(void);
	void		set_attack_damage(int nbr);

	void		attack(const std::string &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif