/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:56:16 by jberredj          #+#    #+#             */
/*   Updated: 2022/03/20 16:58:28 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>

class ClapTrap
{
protected:
	std::string	_name;
	int			_hit_points;
	int			_energy_points;
	int			_total_hp;
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