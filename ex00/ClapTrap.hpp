/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:56:16 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 11:25:20 by jberredj         ###   ########.fr       */
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

	void		attack(std::string const & target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif